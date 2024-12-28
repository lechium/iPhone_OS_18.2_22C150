//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CarChromeViewController, CarMapsSuggestionsView, GuidanceETA, MapsSuggestionsRouteGeniusEntry, NSArray, NSString;

@interface CarRouteGeniusSuggestionsCardViewController : UIViewController
{
    CarMapsSuggestionsView *_suggestionsView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000beb4fb
- (void);	// IMP=0x0010000000beb4e7
@property(retain, nonatomic) CarMapsSuggestionsView *suggestionsView; // @synthesize suggestionsView=_suggestionsView;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)resignCurrent;	// IMP=0x0010000000beb48c
- (void)becomeCurrent;	// IMP=0x0010000000beb44f
@property(readonly) CarChromeViewController *chromeViewController;
@property(retain, nonatomic) GuidanceETA *currentETA;
@property(retain, nonatomic) MapsSuggestionsRouteGeniusEntry *currentSuggestion;
- (void)setRouteIsNavigable:(_Bool)arg1;	// IMP=0x0010000000beb1a1
- (void)viewDidLoad;	// IMP=0x0010000000beacfc
- (id)init;	// IMP=0x0010000000beac9f

// Remaining properties
@property(nonatomic) struct CGSize availableCardSize;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGSize=dd},?,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly) Class superclass;

@end
