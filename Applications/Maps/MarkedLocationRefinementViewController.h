//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, SearchResult, UIViewController;
@protocol MarkedLocationRefinementDelegate;

@interface MarkedLocationRefinementViewController
{
    NSLayoutConstraint *_heightBarConstraint;	// 8 = 0x8
    UIViewController *_originalPresenterViewController;	// 16 = 0x10
    SearchResult *_originalMarkedLocation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000071a20d
@property(readonly, nonatomic) SearchResult *originalMarkedLocation; // @synthesize originalMarkedLocation=_originalMarkedLocation;
@property(nonatomic) __weak UIViewController *originalPresenterViewController; // @synthesize originalPresenterViewController=_originalPresenterViewController;
- (void)_removeMarkedLocation:(id)arg1;	// IMP=0x001000000071a142
- (void)_cancel:(id)arg1;	// IMP=0x001000000071a0b5
- (void)_done:(id)arg1;	// IMP=0x001000000071a01b
- (double)footerHeight;	// IMP=0x0010000000719f9e
- (void)viewLayoutMarginsDidChange;	// IMP=0x0010000000719f40
- (void)viewDidLoad;	// IMP=0x001000000071927e
- (id)initWithMarkedLocation:(id)arg1;	// IMP=0x00100000007191b4
- (id)initWithCamera:(id)arg1 crosshairType:(unsigned long long)arg2;	// IMP=0x0010000000719172

// Remaining properties
@property(nonatomic) __weak id <MarkedLocationRefinementDelegate> delegate; // @dynamic delegate;

@end

