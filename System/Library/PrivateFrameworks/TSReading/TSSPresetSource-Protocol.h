//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, TSSTheme;

@protocol TSSPresetSource
+ (void)bootstrapPresetsOfKind:(NSString *)arg1 inTheme:(TSSTheme *)arg2 alternate:(int)arg3;
+ (NSSet *)presetKinds;
@end
