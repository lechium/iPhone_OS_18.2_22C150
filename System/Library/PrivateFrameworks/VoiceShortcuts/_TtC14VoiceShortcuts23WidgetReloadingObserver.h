//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC14VoiceShortcuts23WidgetReloadingObserver : _TtCs12_SwiftObject
{
    MISSING_TYPE *debouncer;	// 16 = 0x10
    MISSING_TYPE *database;	// 24 = 0x18
}

- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;	// IMP=0x0000000000045694
- (void)databaseResultDidChange:(id)arg1;	// IMP=0x00000000000455ef
- (void)reload;	// IMP=0x00000000000454a7

@end

