//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "STKTextSessionData.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface STKCallSetupSessionData : STKTextSessionData
{
    NSString *_phoneNumber;	// 8 = 0x8
    _Bool _isHighPriority;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000012543
@property(readonly, nonatomic) _Bool isHighPriority; // @synthesize isHighPriority=_isHighPriority;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000001245a
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x00000000000123cb
- (id)initWithText:(id)arg1 simLabel:(id)arg2 phoneNumber:(id)arg3;	// IMP=0x0000000000012349

@end

