//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/NSObject-Protocol.h>

@class BMEventBase, BMStream;

@protocol HDSPBiomeInterface <NSObject>
- (void)publish:(BMEventBase *)arg1 stream:(BMStream *)arg2;
- (id)subscribe:(id)arg1 callback:(void (^)(id <BMStoreData>))arg2;
@end
