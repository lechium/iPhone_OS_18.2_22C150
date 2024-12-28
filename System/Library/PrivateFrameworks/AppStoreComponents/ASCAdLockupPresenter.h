//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCLockup;
@protocol ASCAdLockupPresenterView;

__attribute__((visibility("hidden")))
@interface ASCAdLockupPresenter : NSObject
{
    id <ASCAdLockupPresenterView> _view;	// 8 = 0x8
    ASCLockup *_lockup;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000035da
@property(copy, nonatomic) ASCLockup *lockup; // @synthesize lockup=_lockup;
@property(readonly, nonatomic) id <ASCAdLockupPresenterView> view; // @synthesize view=_view;
- (_Bool)shouldDisplayDescriptionForLockup:(id)arg1;	// IMP=0x00000000000035ae
- (void)setDeveloperName:(id)arg1;	// IMP=0x0000000000003507
- (void)setProductDescription:(id)arg1;	// IMP=0x0000000000003460
- (void)setProductRatingBadge:(id)arg1;	// IMP=0x00000000000033b9
- (void)setProductRating:(float)arg1;	// IMP=0x0000000000003315
- (void)setEditorsChoice:(_Bool)arg1;	// IMP=0x0000000000003275
- (void)setAdTransparencyButtonHidden:(_Bool)arg1;	// IMP=0x000000000000322b
- (void)lockupPresenterDidChange:(id)arg1;	// IMP=0x0000000000002f42
- (void)dealloc;	// IMP=0x0000000000002ecd
- (id)initWithView:(id)arg1 lockupPresenter:(id)arg2;	// IMP=0x0000000000002db4

@end
