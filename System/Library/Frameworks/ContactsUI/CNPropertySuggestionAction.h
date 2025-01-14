//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContactSuggestionViewController;

__attribute__((visibility("hidden")))
@interface CNPropertySuggestionAction
{
    long long _selectedChoice;	// 8 = 0x8
    CNContactSuggestionViewController *_suggestionViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000025d646
@property(retain, nonatomic) CNContactSuggestionViewController *suggestionViewController; // @synthesize suggestionViewController=_suggestionViewController;
@property(nonatomic) long long selectedChoice; // @synthesize selectedChoice=_selectedChoice;
- (void)reject;	// IMP=0x000000000025d5c1
- (void)confirm;	// IMP=0x000000000025d56f
- (_Bool)_confirmOrRejectDonation:(_Bool)arg1;	// IMP=0x000000000025d3d2
- (_Bool)_confirmOrRejectSuggestion:(_Bool)arg1;	// IMP=0x000000000025d277
- (_Bool)_confirmOrReject:(_Bool)arg1;	// IMP=0x000000000025d1c1
- (id)dataSourceWithPropertyItem:(id)arg1;	// IMP=0x000000000025cf3c
- (void)performActionForItem:(id)arg1 sender:(id)arg2;	// IMP=0x000000000025cd57

@end

