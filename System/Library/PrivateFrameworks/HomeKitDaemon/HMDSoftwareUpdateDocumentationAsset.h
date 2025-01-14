//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMSoftwareUpdateDocumentation, HMSoftwareUpdateDocumentationMetadata, NSArray, NSData, NSDate, NSInputStream, NSNotificationCenter, NSObject, NSString, NSURL, NSUUID;
@protocol HMDFileManager, HMSoftwareUpdateDocumentationAssetExtractor, HMSoftwareUpdateUrlSession, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSoftwareUpdateDocumentationAsset : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _shouldAutomaticallyCache;	// 24 = 0x18
    _Bool _extractionEnteredPassThrough;	// 25 = 0x19
    long long _state;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
    HMSoftwareUpdateDocumentationMetadata *_metadata;	// 48 = 0x30
    id <HMSoftwareUpdateUrlSession> _URLSession;	// 56 = 0x38
    CDUnknownBlockType _URLSessionFactory;	// 64 = 0x40
    id <HMSoftwareUpdateDocumentationAssetExtractor> _extractor;	// 72 = 0x48
    CDUnknownBlockType _extractorFactory;	// 80 = 0x50
    NSInputStream *_archivedFileStream;	// 88 = 0x58
    unsigned long long _downloadRetryCount;	// 96 = 0x60
    CDUnknownBlockType _dateWithTimeIntervalSinceNowFactory;	// 104 = 0x68
    NSNotificationCenter *_notificationCenter;	// 112 = 0x70
    id <HMDFileManager> _fileManager;	// 120 = 0x78
    NSDate *_nextPermittedDownloadDate;	// 128 = 0x80
    NSData *_testDocumentData;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000a8dc5e
+ (id)logCategory;	// IMP=0x0010000000a8dc2e
+ (id)assetWithURL:(id)arg1 fileManager:(id)arg2;	// IMP=0x0010000000a8d716
+ (id)assetDirectoryURL;	// IMP=0x0010000000a8d6e6
- (void).cxx_destruct;	// IMP=0x0000000000a8addf
@property(retain, nonatomic) NSData *testDocumentData; // @synthesize testDocumentData=_testDocumentData;
@property(copy) NSDate *nextPermittedDownloadDate; // @synthesize nextPermittedDownloadDate=_nextPermittedDownloadDate;
@property _Bool extractionEnteredPassThrough; // @synthesize extractionEnteredPassThrough=_extractionEnteredPassThrough;
@property(retain, nonatomic) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) CDUnknownBlockType dateWithTimeIntervalSinceNowFactory; // @synthesize dateWithTimeIntervalSinceNowFactory=_dateWithTimeIntervalSinceNowFactory;
@property unsigned long long downloadRetryCount; // @synthesize downloadRetryCount=_downloadRetryCount;
@property(retain, nonatomic) NSInputStream *archivedFileStream; // @synthesize archivedFileStream=_archivedFileStream;
@property(readonly) CDUnknownBlockType extractorFactory; // @synthesize extractorFactory=_extractorFactory;
@property(retain, nonatomic) id <HMSoftwareUpdateDocumentationAssetExtractor> extractor; // @synthesize extractor=_extractor;
@property(readonly) CDUnknownBlockType URLSessionFactory; // @synthesize URLSessionFactory=_URLSessionFactory;
@property(retain, nonatomic) id <HMSoftwareUpdateUrlSession> URLSession; // @synthesize URLSession=_URLSession;
@property(readonly) HMSoftwareUpdateDocumentationMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)extractionEnteredPassThroughMode;	// IMP=0x0000000000a8ab44
- (void)extractionCompleteAtArchivePath:(id)arg1;	// IMP=0x0000000000a8aa41
- (void)setExtractionProgress:(double)arg1;	// IMP=0x0000000000a8a941
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x0000000000a8a296
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x0000000000a8a159
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000000a89ffc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a89f04
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a89df8
- (id)logIdentifier;	// IMP=0x0000000000a89da8
- (void)finishUnarchive;	// IMP=0x0000000000a89d56
- (void)cancelUnarchive;	// IMP=0x0000000000a89d04
- (void)startUnarchive;	// IMP=0x0000000000a89cb2
- (void)finishDownload;	// IMP=0x0000000000a89c60
- (void)cancelDownload;	// IMP=0x0000000000a89c0e
- (void)startDownload;	// IMP=0x0000000000a89bbc
- (_Bool)purgeWithError:(id *)arg1;	// IMP=0x0000000000a89a64
- (void)startCaching;	// IMP=0x0000000000a899f6
- (_Bool)saveWithError:(id *)arg1;	// IMP=0x0000000000a89654
- (void)resetDownloadRetryCount;	// IMP=0x0000000000a894f3
- (void)increaseDownloadRetryCount;	// IMP=0x0000000000a8927c
@property(readonly) _Bool isDownloadPermitted;
@property(readonly, copy) HMSoftwareUpdateDocumentation *documentation;
@property(readonly, copy) NSURL *bundleURL;
- (id)archiveURL;	// IMP=0x0000000000a88e18
- (id)metadataURL;	// IMP=0x0000000000a88dc1
@property(readonly, copy) NSURL *URL;
- (void)setState:(long long)arg1;	// IMP=0x0000000000a88b7a
@property(readonly) long long state; // @synthesize state=_state;
@property _Bool shouldAutomaticallyCache; // @synthesize shouldAutomaticallyCache=_shouldAutomaticallyCache;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a88996
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *shortDescription;
- (id)initWithDocumentationMetadata:(id)arg1;	// IMP=0x0000000000a886f9
- (id)initWithDocumentationMetadata:(id)arg1 dateWithTimeIntervalSinceNowFactory:(CDUnknownBlockType)arg2 URLSessionFactory:(CDUnknownBlockType)arg3 extractorFactory:(CDUnknownBlockType)arg4 notificationCenter:(id)arg5 fileManager:(id)arg6;	// IMP=0x0000000000a8848b
- (id)init;	// IMP=0x0000000000a883e3

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly) Class superclass;

@end

