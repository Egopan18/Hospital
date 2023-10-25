-- MySQL dump 10.13  Distrib 8.0.34, for Win64 (x86_64)
--
-- Host: localhost    Database: hospitaldb
-- ------------------------------------------------------
-- Server version	8.0.34

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `doctor`
--

DROP TABLE IF EXISTS `doctor`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `doctor` (
  `docID` int NOT NULL AUTO_INCREMENT,
  `docName` varchar(64) NOT NULL,
  `docSurname` varchar(64) NOT NULL,
  `docMiddleName` varchar(64) DEFAULT NULL,
  `docSpeciality` varchar(255) DEFAULT NULL,
  `docEmploymentDate` date DEFAULT NULL,
  `docExpirienceYears` int DEFAULT NULL,
  `docRating` int DEFAULT NULL,
  `docMaxDayClients` int DEFAULT NULL,
  `docWorkingDays` varchar(255) DEFAULT NULL,
  `docWorkingHoursStart` time DEFAULT NULL,
  `docWorkingHoursEnd` time DEFAULT NULL,
  `docReviews` text,
  `docWorkPlace` int DEFAULT NULL,
  PRIMARY KEY (`docID`),
  KEY `docWorkPlace` (`docWorkPlace`),
  CONSTRAINT `doctor_ibfk_1` FOREIGN KEY (`docWorkPlace`) REFERENCES `hospital` (`hospitalID`),
  CONSTRAINT `doctor_chk_1` CHECK ((`docRating` between 0 and 10)),
  CONSTRAINT `doctor_chk_2` CHECK ((`docMaxDayClients` between 0 and 40))
) ENGINE=InnoDB AUTO_INCREMENT=13 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `doctor`
--

LOCK TABLES `doctor` WRITE;
/*!40000 ALTER TABLE `doctor` DISABLE KEYS */;
INSERT INTO `doctor` VALUES (1,'Doctor1','Lastname1','Middle1','Cardiologist','2023-01-15',10,9,20,'Monday','08:00:00','14:30:00','Excellent doctor',1),(2,'Doctor2','Lastname2','Middle2','Pediatrician','2022-11-05',7,8,18,'Tuesday','09:00:00','16:30:00','Great with kids',2),(3,'Doctor1','Lastname1','Middle1','Speciality1','2022-01-01',5,9,20,NULL,'09:00:00','17:00:00','Doctor1 Reviews',1),(4,'Doctor2','Lastname2','Middle2','Speciality2','2022-02-01',6,8,18,NULL,'08:30:00','16:30:00','Doctor2 Reviews',2),(5,'Doctor3','Lastname3','Middle3','Speciality3','2022-03-01',7,7,16,NULL,'08:00:00','16:00:00','Doctor3 Reviews',3),(6,'Doctor4','Lastname4','Middle4','Speciality4','2022-04-01',8,8,20,NULL,'09:00:00','17:00:00','Doctor4 Reviews',1),(7,'Doctor5','Lastname5','Middle5','Speciality5','2022-05-01',9,9,18,NULL,'09:30:00','17:30:00','Doctor5 Reviews',2),(8,'Doctor6','Lastname6','Middle6','Speciality6','2022-06-01',10,10,22,NULL,'10:00:00','18:00:00','Doctor6 Reviews',3),(9,'Doctor7','Lastname7','Middle7','Speciality7','2022-07-01',6,9,19,NULL,'08:30:00','17:30:00','Doctor7 Reviews',1),(10,'Doctor8','Lastname8','Middle8','Speciality8','2022-08-01',7,7,16,NULL,'08:00:00','16:00:00','Doctor8 Reviews',2),(11,'Doctor9','Lastname9','Middle9','Speciality9','2022-09-01',8,8,20,NULL,'09:30:00','17:30:00','Doctor9 Reviews',3),(12,'Doctor10','Lastname10','Middle10','Speciality10','2022-10-01',9,10,21,NULL,'10:30:00','18:30:00','Doctor10 Reviews',1);
/*!40000 ALTER TABLE `doctor` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `doctorworkingdays`
--

DROP TABLE IF EXISTS `doctorworkingdays`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `doctorworkingdays` (
  `doctorID` int NOT NULL,
  `workingDay` enum('Monday','Tuesday','Wednesday','Thursday','Friday','Saturday') NOT NULL,
  PRIMARY KEY (`doctorID`,`workingDay`),
  CONSTRAINT `doctorworkingdays_ibfk_1` FOREIGN KEY (`doctorID`) REFERENCES `doctor` (`docID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `doctorworkingdays`
--

LOCK TABLES `doctorworkingdays` WRITE;
/*!40000 ALTER TABLE `doctorworkingdays` DISABLE KEYS */;
INSERT INTO `doctorworkingdays` VALUES (1,'Monday'),(1,'Tuesday'),(1,'Wednesday'),(2,'Tuesday'),(2,'Thursday'),(3,'Wednesday'),(3,'Friday'),(4,'Monday'),(4,'Wednesday'),(5,'Tuesday'),(5,'Thursday'),(6,'Wednesday'),(6,'Friday'),(7,'Monday'),(7,'Tuesday'),(8,'Wednesday'),(8,'Thursday'),(9,'Monday'),(9,'Wednesday');
/*!40000 ALTER TABLE `doctorworkingdays` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `hospital`
--

DROP TABLE IF EXISTS `hospital`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `hospital` (
  `hospitalID` int NOT NULL AUTO_INCREMENT,
  `hospitalIsPrivate` tinyint(1) DEFAULT NULL,
  `hospitalAddress` varchar(255) DEFAULT NULL,
  `hospitalName` varchar(255) DEFAULT NULL,
  `hospitalRating` int DEFAULT NULL,
  PRIMARY KEY (`hospitalID`),
  CONSTRAINT `hospital_chk_1` CHECK ((`hospitalRating` between 0 and 10))
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `hospital`
--

LOCK TABLES `hospital` WRITE;
/*!40000 ALTER TABLE `hospital` DISABLE KEYS */;
INSERT INTO `hospital` VALUES (1,1,'123 Main St, CityA, DistrictA','CityA Hospital',9),(2,0,'456 Elm St, CityB, DistrictB','CityB Public Hospital',7),(3,1,'789 Oak St, CityC, DistrictC','CityC Private Hospital',8);
/*!40000 ALTER TABLE `hospital` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `user`
--

DROP TABLE IF EXISTS `user`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `user` (
  `userID` int NOT NULL AUTO_INCREMENT,
  `userName` varchar(64) NOT NULL,
  `userSurname` varchar(64) NOT NULL,
  `userMiddleName` varchar(64) DEFAULT NULL,
  `userPhone` varchar(25) DEFAULT NULL,
  `userPassword` varchar(64) NOT NULL,
  `userAge` int DEFAULT NULL,
  `userBirthDate` date DEFAULT NULL,
  PRIMARY KEY (`userID`)
) ENGINE=InnoDB AUTO_INCREMENT=58 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `user`
--

LOCK TABLES `user` WRITE;
/*!40000 ALTER TABLE `user` DISABLE KEYS */;
INSERT INTO `user` VALUES (1,'User1','Lastname1','Middle1','123-456-7890','password1',25,NULL),(2,'User2','Lastname2','Middle2','234-567-8901','password2',32,NULL),(3,'Danil','Dedov','Viktorovych','+3800634445566','P5s3w0rD',18,NULL),(4,'User4','Lastname4','Middle4','456-789-0123','password4',45,NULL),(5,'User5','Lastname5','Middle5','567-890-1234','password5',38,NULL),(6,'User6','Lastname6','Middle6','678-901-2345','password6',51,NULL),(7,'User7','Lastname7','Middle7','789-901-2345','password7',42,NULL),(8,'User8','Lastname8','Middle8','890-123-4567','password8',27,NULL),(9,'User9','Lastname9','Middle9','901-234-5678','password9',33,NULL),(10,'User10','Lastname10','Middle10','012-345-6789','password10',56,NULL),(11,'User11','Lastname11','Middle11','123-456-7890','password11',41,NULL),(12,'User12','Lastname12','Middle12','234-567-8901','password12',35,NULL),(13,'User13','Lastname13','Middle13','345-678-9012','password13',29,NULL),(14,'User14','Lastname14','Middle14','456-789-0123','password14',45,NULL),(15,'User15','Lastname15','Middle15','567-890-1234','password15',28,NULL);
/*!40000 ALTER TABLE `user` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `visits`
--

DROP TABLE IF EXISTS `visits`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `visits` (
  `visitID` int NOT NULL AUTO_INCREMENT,
  `userID` int DEFAULT NULL,
  `doctorID` int DEFAULT NULL,
  `visitDate` date DEFAULT NULL,
  `diagnosis` varchar(255) DEFAULT NULL,
  `prescription` text,
  `visitStatus` tinyint DEFAULT '0' COMMENT '0 planned, 1 - past',
  PRIMARY KEY (`visitID`),
  KEY `userID_idx` (`userID`),
  KEY `doctorID_idx` (`doctorID`),
  CONSTRAINT `doctorID` FOREIGN KEY (`doctorID`) REFERENCES `doctor` (`docID`),
  CONSTRAINT `userID` FOREIGN KEY (`userID`) REFERENCES `user` (`userID`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `visits`
--

LOCK TABLES `visits` WRITE;
/*!40000 ALTER TABLE `visits` DISABLE KEYS */;
INSERT INTO `visits` VALUES (1,1,1,'2023-10-15','Checkup','Prescription 1',2),(2,1,3,'2023-11-10','Headache','Prescription 2',1),(3,2,2,'2023-09-20','Back Pain','Prescription 3',2),(4,2,4,'2023-10-05','Cough','Prescription 4',1),(5,3,3,'2023-08-10','Stomachache','Prescription 7',1),(6,3,5,'2023-09-02','Sprained Ankle','Prescription 8',2),(7,4,7,'2023-11-20','Cold','Prescription 9',1),(8,4,9,'2023-12-05','Back Pain','Prescription 10',2),(9,5,2,'2023-10-25','Cough','Prescription 11',2),(10,5,4,'2023-11-15','Migraine','Prescription 12',1);
/*!40000 ALTER TABLE `visits` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2023-10-23 19:29:10
