//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@protocol _PUOneUpCropUIButtonDelegate;

__attribute__((visibility("hidden")))
@interface _PUOneUpCropUIButton : UIButton
{
    _Bool _beingTouched;	// 8 = 0x8
    id <_PUOneUpCropUIButtonDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000018ad9b
@property(nonatomic, getter=isBeingTouched) _Bool beingTouched; // @synthesize beingTouched=_beingTouched;
@property(nonatomic) __weak id <_PUOneUpCropUIButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000018ac36
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000018abf3
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000018abb0
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000018ab6a
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000018aaf7
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000018aa81

@end
