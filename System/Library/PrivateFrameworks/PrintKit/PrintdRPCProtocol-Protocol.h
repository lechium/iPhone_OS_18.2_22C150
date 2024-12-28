//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrintKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, NWEndpoint, PKPrintSettings, PKPrinterBonjourEndpoint;

@protocol PrintdRPCProtocol <NSObject>
- (void)logiCloudPrintersReply:(void (^)(NSArray *))arg1;
- (void)resetPKCloudData;
- (void)updateiCloudPrinterLocation:(NSDictionary *)arg1 newLocation:(NSString *)arg2;
- (void)updateiCloudPrinterDisplayName:(NSDictionary *)arg1 newDisplayName:(NSString *)arg2;
- (void)removePrinterFromiCloudWithInfo:(NSDictionary *)arg1;
- (void)addPrinterToiCloudWithInfo:(NSDictionary *)arg1;
- (void)setiCloudPrinters:(NSArray *)arg1;
- (void)getiCloudPrintersReply:(void (^)(NSArray *))arg1;
- (void)setLastUsedPrintersForCurrentNetwork:(NSDictionary *)arg1;
- (void)getLastUsedPrintersForCurrentNetworkReply:(void (^)(NSString *, NSArray *))arg1;
- (void)_endpointResolve:(NWEndpoint *)arg1 timeout:(double)arg2 reply:(void (^)(NSURL *, NSDictionary *))arg3;
- (void)browseInfoForPrinter:(PKPrinterBonjourEndpoint *)arg1 timeout:(double)arg2 reply:(void (^)(PKPrinterBrowseInfo *))arg3;
- (void)startBrowsing:(NSDictionary *)arg1 provenance:(unsigned long long)arg2;
- (void)cancelJob:(int)arg1;
- (void)getJobUpdateStatus:(int)arg1 includeThumbnail:(_Bool)arg2 reply:(void (^)(PKMutableJobState *))arg3;
- (void)getRecentJobsReply:(void (^)(NSArray *, NSArray *))arg1;
- (void)finishRequestWithCancel:(_Bool)arg1 reply:(void (^)(NSNumber *))arg2;
- (void)startStreamingRequest:(PKPrinterBonjourEndpoint *)arg1 printSettings:(PKPrintSettings *)arg2 reply:(void (^)(NSFileHandle *))arg3;
- (void)_checkAccessState:(PKPrinterBonjourEndpoint *)arg1 reply:(void (^)(long long))arg2;
- (void)_queryPrinter:(PKPrinterBonjourEndpoint *)arg1 attributes:(NSArray *)arg2 reply:(void (^)(NSData *))arg3;
- (void)_getPrinterDescription:(PKPrinterBonjourEndpoint *)arg1 assertReachability:(_Bool)arg2 reply:(void (^)(PKPrinterDescription *, PKPrinterBrowseInfo *))arg3;
- (void)_identifyPrinter:(PKPrinterBonjourEndpoint *)arg1 message:(NSString *)arg2 actions:(NSArray *)arg3;
- (void)_removeKeychainItem:(PKPrinterBonjourEndpoint *)arg1;
- (void)_realPathForTmpReply:(void (^)(NSURL *))arg1;
@end
