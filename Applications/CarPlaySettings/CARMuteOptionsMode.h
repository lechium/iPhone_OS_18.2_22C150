//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CARMuteOptionsMode : NSObject
{
    NSString *_fullTitle;	// 8 = 0x8
    NSString *_footer;	// 16 = 0x10
    unsigned long long _muteType;	// 24 = 0x18
    long long _announceType;	// 32 = 0x20
}

+ (id)allModes;	// IMP=0x00400000000229f1
+ (id)modeWithFullTitle:(id)arg1 footer:(id)arg2 muteType:(unsigned long long)arg3 announceType:(long long)arg4;	// IMP=0x00100000000228bb
- (void).cxx_destruct;	// IMP=0x0020000000022c42
@property(readonly, nonatomic) long long announceType; // @synthesize announceType=_announceType;
@property(readonly, nonatomic) unsigned long long muteType; // @synthesize muteType=_muteType;
@property(readonly, copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(readonly, copy, nonatomic) NSString *fullTitle; // @synthesize fullTitle=_fullTitle;
- (id)initWithFullTitle:(id)arg1 footer:(id)arg2 muteType:(unsigned long long)arg3 announceType:(long long)arg4;	// IMP=0x0010000000022942

@end

