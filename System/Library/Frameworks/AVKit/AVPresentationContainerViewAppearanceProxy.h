//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface AVPresentationContainerViewAppearanceProxy : NSObject
{
    _Bool _clipsToBounds;	// 8 = 0x8
    UIView *_actualView;	// 16 = 0x10
    NSString *_cornerCurve;	// 24 = 0x18
    unsigned long long _maskedCorners;	// 32 = 0x20
    double _cornerRadius;	// 40 = 0x28
    UIColor *_backgroundColor;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000014265d
@property(nonatomic) _Bool clipsToBounds; // @synthesize clipsToBounds=_clipsToBounds;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) unsigned long long maskedCorners; // @synthesize maskedCorners=_maskedCorners;
@property(retain, nonatomic) NSString *cornerCurve; // @synthesize cornerCurve=_cornerCurve;
@property(nonatomic) __weak UIView *actualView; // @synthesize actualView=_actualView;

@end
