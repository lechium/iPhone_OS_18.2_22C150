//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UITextInputSessionKeyboardDockItemButtonPressAction
{
    unsigned long long _buttonPressResult;	// 176 = 0xb0
    unsigned long long _buttonType;	// 184 = 0xb8
    long long _uiOrientation;	// 192 = 0xc0
    double _touchDuration;	// 200 = 0xc8
    struct CGSize _buttonSize;	// 208 = 0xd0
    struct CGPoint _touchDownPoint;	// 224 = 0xe0
    struct CGPoint _touchUpPoint;	// 240 = 0xf0
}

@property(nonatomic) double touchDuration; // @synthesize touchDuration=_touchDuration;
@property(nonatomic) struct CGPoint touchUpPoint; // @synthesize touchUpPoint=_touchUpPoint;
@property(nonatomic) struct CGPoint touchDownPoint; // @synthesize touchDownPoint=_touchDownPoint;
@property(nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
@property(nonatomic) long long uiOrientation; // @synthesize uiOrientation=_uiOrientation;
@property(nonatomic) unsigned long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) unsigned long long buttonPressResult; // @synthesize buttonPressResult=_buttonPressResult;
- (long long)inputActionCount;	// IMP=0x0000000001706edf
- (id)description;	// IMP=0x0000000001706cb7

@end

