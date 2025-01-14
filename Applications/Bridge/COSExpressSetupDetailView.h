//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableDictionary, UIStackView;

@interface COSExpressSetupDetailView : UIView
{
    NSMutableDictionary *_sectionMap;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
    UIStackView *_sectionStackView;	// 24 = 0x18
}

+ (id)testSections;	// IMP=0x00400000000d1d9f
- (void).cxx_destruct;	// IMP=0x00200000000d2792
@property(retain, nonatomic) UIStackView *sectionStackView; // @synthesize sectionStackView=_sectionStackView;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSMutableDictionary *sectionMap; // @synthesize sectionMap=_sectionMap;
- (void)_setupSections;	// IMP=0x00100000000d224b
- (id)sectionViewForSection:(id)arg1;	// IMP=0x00100000000d21e1
- (id)initWithSections:(id)arg1;	// IMP=0x00100000000d211a

@end

