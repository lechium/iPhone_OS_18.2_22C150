//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class BRCLocalItem, BRCZoneRowID;

@protocol BRCSyncUpCallbackProtocol <NSObject>
- (unsigned long long)postponeSyncUpCallback:(BRCLocalItem *)arg1 inZone:(BRCZoneRowID *)arg2;
- (void)blockSyncUpCallback:(BRCLocalItem *)arg1 inZone:(BRCZoneRowID *)arg2;
@end

