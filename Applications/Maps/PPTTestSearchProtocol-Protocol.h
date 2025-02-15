//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MKLocalSearchCompletion, NSString, SearchFieldItem;

@protocol PPTTestSearchProtocol <NSObject>
- (void)pptSelectACSuggestionMatchingAddress:(NSString *)arg1;
- (void)pptSelectKeyboardInteractionModel;
- (void)pptSelectFirstGuidePublisher;
- (void)pptSelectFirstCuratedGuide;
- (void)pptSelectSeeAllCuratedCollections;
- (void)pptTestSearchCancel;
- (void)pptTestRefreshSearch;
- (void)pptTestEnterSearchMode;
- (void)pptTestSearchRetainQueryForSelectedSearchCompletion:(MKLocalSearchCompletion *)arg1;
- (void)pptTestSearchNearbyCategoryWithIndex:(unsigned long long)arg1;
- (void)pptTestSearchEndEditing;
- (void)pptTestSearchForFieldItem:(SearchFieldItem *)arg1;
- (void)pptTestAutocompleteSearchForFieldItem:(SearchFieldItem *)arg1;
@end

