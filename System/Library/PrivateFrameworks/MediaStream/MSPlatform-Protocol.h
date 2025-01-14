//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaStream/NSObject-Protocol.h>

@class MSMediaStreamDaemon, NSData, NSDictionary, NSString, NSURL;

@protocol MSPlatform <NSObject>
- (MSMediaStreamDaemon *)theDaemon;
- (NSString *)authTokenForPersonID:(NSString *)arg1;
- (NSURL *)baseURLForPersonID:(NSString *)arg1;
- (NSDictionary *)socketOptions;
- (_Bool)policyMayDownload;
- (_Bool)policyMayUpload;
- (NSString *)appBundleInfoString;
- (NSString *)OSString;
- (NSString *)hardwareString;
- (NSString *)UDID;
- (Class)subscriberPluginClass;
- (Class)publisherPluginClass;
- (NSString *)pathMediaStreamDir;
- (NSString *)fullNameFromFirstName:(NSString *)arg1 lastName:(NSString *)arg2;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(NSString *)arg6 args:(struct __va_list_tag [1])arg7;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(NSString *)arg3 args:(struct __va_list_tag [1])arg4;
- (_Bool)shouldLogAtLevel:(int)arg1;

@optional
- (_Bool)isPerformanceLoggingEnabled;
- (NSURL *)contentURLForPersonID:(NSString *)arg1;
- (_Bool)shouldEnableNewFeatures;
- (NSData *)pushToken;
- (NSData *)pushTokenForPersonID:(NSString *)arg1;
- (_Bool)policyMaySendDelete;
- (void)didDetectUnrecoverableCondition;
- (Class)deletePluginClass;
@end

