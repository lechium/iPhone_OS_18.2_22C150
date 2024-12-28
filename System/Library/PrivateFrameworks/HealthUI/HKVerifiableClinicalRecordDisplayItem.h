//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface HKVerifiableClinicalRecordDisplayItem : NSObject
{
    long long _type;	// 8 = 0x8
    long long _subtitleStyle;	// 16 = 0x10
    NSString *_titleText;	// 24 = 0x18
    NSString *_detailText;	// 32 = 0x20
    NSAttributedString *_attributedDetailText;	// 40 = 0x28
}

+ (id)valueItemWithTitleText:(id)arg1 attributedDetailText:(id)arg2;	// IMP=0x006000000017aea7
+ (id)valueItemWithTitleText:(id)arg1 detailText:(id)arg2;	// IMP=0x006000000017ade7
+ (id)subtitleItemWithTitleText:(id)arg1 detailText:(id)arg2 style:(long long)arg3;	// IMP=0x006000000017ad0e
- (void).cxx_destruct;	// IMP=0x000000000017afe0
@property(retain, nonatomic) NSAttributedString *attributedDetailText; // @synthesize attributedDetailText=_attributedDetailText;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) long long subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property(nonatomic) long long type; // @synthesize type=_type;

@end
