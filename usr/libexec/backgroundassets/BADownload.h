//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BAApplicationInfo, BAURLSession, NSData, NSDate, NSError, NSNumber, NSString, NSURL;
@protocol BADownloadAgentDelegate, OS_dispatch_queue, OS_os_transaction;

@interface BADownload : NSObject
{
    struct os_unfair_lock_s _downloadLockOpaque;	// 8 = 0x8
    _Bool _isForegroundDownload;	// 12 = 0xc
    _Bool _permitInitialCellularDownload;	// 13 = 0xd
    unsigned int _powerAssertionID;	// 16 = 0x10
    long long _priority;	// 24 = 0x18
    long long _internalState;	// 32 = 0x20
    long long _necessity;	// 40 = 0x28
    unsigned long long _clientSpecifiedFileSize;	// 48 = 0x30
    NSString *_identifier;	// 56 = 0x38
    NSString *_uniqueIdentifier;	// 64 = 0x40
    NSString *_applicationGroupIdentifier;	// 72 = 0x48
    NSURL *_stagedDownloadedFileURL;	// 80 = 0x50
    NSString *_applicationIdentifier;	// 88 = 0x58
    id <BADownloadAgentDelegate> _delegate;	// 96 = 0x60
    NSDate *_downloadStartDate;	// 104 = 0x68
    NSString *_downloadCachePath;	// 112 = 0x70
    BAURLSession *_session;	// 120 = 0x78
    NSData *_resumeData;	// 128 = 0x80
    NSError *_downloadError;	// 136 = 0x88
    NSNumber *_downloadedFileSize;	// 144 = 0x90
    BAApplicationInfo *_applicationInfo;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_responseQueue;	// 160 = 0xa0
    NSObject<OS_os_transaction> *_transaction;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000003a6c9
+ (id)classesForSerialization;	// IMP=0x001000000000994a
- (void).cxx_destruct;	// IMP=0x002000000003c3d9
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property unsigned int powerAssertionID; // @synthesize powerAssertionID=_powerAssertionID;
@property(retain) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property _Bool permitInitialCellularDownload; // @synthesize permitInitialCellularDownload=_permitInitialCellularDownload;
@property(retain) BAApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property(retain) NSNumber *downloadedFileSize; // @synthesize downloadedFileSize=_downloadedFileSize;
@property(retain) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(retain) NSData *resumeData; // @synthesize resumeData=_resumeData;
- (void);	// IMP=0x001000000003c2d2
@property(retain) BAURLSession *session; // @synthesize session=_session;
@property(retain) NSString *downloadCachePath; // @synthesize downloadCachePath=_downloadCachePath;
@property(retain) NSDate *downloadStartDate; // @synthesize downloadStartDate=_downloadStartDate;
@property __weak id <BADownloadAgentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain) NSString *applicationGroupIdentifier; // @synthesize applicationGroupIdentifier=_applicationGroupIdentifier;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property _Bool isForegroundDownload; // @synthesize isForegroundDownload=_isForegroundDownload;
@property(readonly) struct os_unfair_lock_s *downloadLock;
- (id)debugDescription;	// IMP=0x001000000003bd16
- (id)description;	// IMP=0x001000000003bc21
- (unsigned long long)hash;	// IMP=0x001000000003bb95
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003ba4c
- (id)copyAsNonEssential;	// IMP=0x001000000003ba1a
@property(readonly, nonatomic) long long state;
@property long long necessity; // @synthesize necessity=_necessity;
@property(readonly) _Bool isEssential;
@property long long priority; // @synthesize priority=_priority;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003b509
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003b02c
- (id)initPrivatelyWithApplicationGroupIdentifier:(id)arg1;	// IMP=0x001000000003aded
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003a739
- (id)init;	// IMP=0x001000000003a6d1
- (void)_removeActivityAndPowerAssertion;	// IMP=0x00100000000098d5
- (void)_addActivityWithIdentifier:(id)arg1 takePowerAssertion:(_Bool)arg2;	// IMP=0x0010000000009769
- (void)setApplicationInformationForRestrictedDownload:(id)arg1;	// IMP=0x001000000000970f
- (_Bool)startDownloadWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000096b4
- (void)cancelDownloadSilently;	// IMP=0x001000000000965c
- (void)cancelDownload;	// IMP=0x0010000000009604
- (void)pauseDownload;	// IMP=0x00100000000095ac
- (void)demoteToBackground;	// IMP=0x0010000000009554
- (void)promoteToForeground;	// IMP=0x00100000000094fc
- (long long)compare:(id)arg1;	// IMP=0x0010000000009ab9

@end
