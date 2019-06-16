USE [master]
GO

/****** Object:  Database [catridge_accounting]    Script Date: 06/17/2019 00:55:24 ******/
CREATE DATABASE [catridge_accounting] ON  PRIMARY 
( NAME = N'catridge_accounting', FILENAME = N'D:\_DEVELOPER_\_PROJECTs_\_GITHUB_\SQL_test\db\catridge_accounting.mdf' , SIZE = 2304KB , MAXSIZE = UNLIMITED, FILEGROWTH = 1024KB )
 LOG ON 
( NAME = N'catridge_accounting_log', FILENAME = N'D:\_DEVELOPER_\_PROJECTs_\_GITHUB_\SQL_test\db\catridge_accounting_log.LDF' , SIZE = 832KB , MAXSIZE = 2048GB , FILEGROWTH = 10%)
GO

ALTER DATABASE [catridge_accounting] SET COMPATIBILITY_LEVEL = 100
GO

IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [catridge_accounting].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO

ALTER DATABASE [catridge_accounting] SET ANSI_NULL_DEFAULT OFF 
GO

ALTER DATABASE [catridge_accounting] SET ANSI_NULLS OFF 
GO

ALTER DATABASE [catridge_accounting] SET ANSI_PADDING OFF 
GO

ALTER DATABASE [catridge_accounting] SET ANSI_WARNINGS OFF 
GO

ALTER DATABASE [catridge_accounting] SET ARITHABORT OFF 
GO

ALTER DATABASE [catridge_accounting] SET AUTO_CLOSE ON 
GO

ALTER DATABASE [catridge_accounting] SET AUTO_CREATE_STATISTICS ON 
GO

ALTER DATABASE [catridge_accounting] SET AUTO_SHRINK OFF 
GO

ALTER DATABASE [catridge_accounting] SET AUTO_UPDATE_STATISTICS ON 
GO

ALTER DATABASE [catridge_accounting] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO

ALTER DATABASE [catridge_accounting] SET CURSOR_DEFAULT  GLOBAL 
GO

ALTER DATABASE [catridge_accounting] SET CONCAT_NULL_YIELDS_NULL OFF 
GO

ALTER DATABASE [catridge_accounting] SET NUMERIC_ROUNDABORT OFF 
GO

ALTER DATABASE [catridge_accounting] SET QUOTED_IDENTIFIER OFF 
GO

ALTER DATABASE [catridge_accounting] SET RECURSIVE_TRIGGERS OFF 
GO

ALTER DATABASE [catridge_accounting] SET  ENABLE_BROKER 
GO

ALTER DATABASE [catridge_accounting] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO

ALTER DATABASE [catridge_accounting] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO

ALTER DATABASE [catridge_accounting] SET TRUSTWORTHY OFF 
GO

ALTER DATABASE [catridge_accounting] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO

ALTER DATABASE [catridge_accounting] SET PARAMETERIZATION SIMPLE 
GO

ALTER DATABASE [catridge_accounting] SET READ_COMMITTED_SNAPSHOT OFF 
GO

ALTER DATABASE [catridge_accounting] SET HONOR_BROKER_PRIORITY OFF 
GO

ALTER DATABASE [catridge_accounting] SET  READ_WRITE 
GO

ALTER DATABASE [catridge_accounting] SET RECOVERY SIMPLE 
GO

ALTER DATABASE [catridge_accounting] SET  MULTI_USER 
GO

ALTER DATABASE [catridge_accounting] SET PAGE_VERIFY CHECKSUM  
GO

ALTER DATABASE [catridge_accounting] SET DB_CHAINING OFF 
GO


