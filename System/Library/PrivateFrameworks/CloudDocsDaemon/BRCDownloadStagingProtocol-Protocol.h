//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class BRCItemID, NSString, NSURL;

@protocol BRCDownloadStagingProtocol <NSObject>
- (void)cleanupStagedDownloadWithID:(NSString *)arg1 forItemID:(BRCItemID *)arg2;
- (NSURL *)createURLForDownloadWithStageID:(NSString *)arg1 name:(NSString *)arg2;
@end

