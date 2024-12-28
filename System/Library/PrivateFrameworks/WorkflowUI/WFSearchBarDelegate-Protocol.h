//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSString, WFSearchBar;

@protocol WFSearchBarDelegate <NSObject>
- (void)searchBar:(WFSearchBar *)arg1 textDidChange:(NSString *)arg2;

@optional
- (void)searchBarDidBeginEditing:(WFSearchBar *)arg1;
- (void)searchBarCancelButtonWillHide:(WFSearchBar *)arg1;
- (void)searchBarCancelButtonWillAppear:(WFSearchBar *)arg1;
@end
