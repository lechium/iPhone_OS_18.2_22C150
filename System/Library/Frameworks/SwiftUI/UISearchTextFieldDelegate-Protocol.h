//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUI/UITextFieldDelegate-Protocol.h>

@class NSItemProvider, UISearchTextField, UISearchToken;
@protocol UISearchSuggestion;

@protocol UISearchTextFieldDelegate <UITextFieldDelegate>

@optional
- (void)searchTextField:(UISearchTextField *)arg1 didSelectSuggestion:(id <UISearchSuggestion>)arg2;
- (NSItemProvider *)searchTextField:(UISearchTextField *)arg1 itemProviderForCopyingToken:(UISearchToken *)arg2;
@end

