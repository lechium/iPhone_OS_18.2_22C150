//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MUTextPairViewModel : NSObject
{
    NSString *_leftText;	// 8 = 0x8
    NSString *_rightText;	// 16 = 0x10
}

+ (id)textPairViewModelsFromStrings:(id)arg1;	// IMP=0x00600000000e6d5f
- (void).cxx_destruct;	// IMP=0x00000000000e6f3a
@property(retain, nonatomic) NSString *rightText; // @synthesize rightText=_rightText;
@property(retain, nonatomic) NSString *leftText; // @synthesize leftText=_leftText;

@end

