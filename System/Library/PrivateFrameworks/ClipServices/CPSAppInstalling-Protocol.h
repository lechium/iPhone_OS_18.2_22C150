//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClipServices/NSObject-Protocol.h>

@class NSString;

@protocol CPSAppInstalling <NSObject>
- (_Bool)stopStallingCurrentInstallation;
- (void)installDownloadedAppWithBundleID:(NSString *)arg1 localFilePath:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end
