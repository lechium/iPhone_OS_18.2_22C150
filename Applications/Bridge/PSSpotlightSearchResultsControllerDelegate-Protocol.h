//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, PSSpotlightSearchResultsController, UIImage;

@protocol PSSpotlightSearchResultsControllerDelegate
- (UIImage *)searchResultsController:(PSSpotlightSearchResultsController *)arg1 iconForCategory:(NSString *)arg2;
- (long long)searchResultsController:(PSSpotlightSearchResultsController *)arg1 sortCategory1:(NSString *)arg2 sortCategory2:(NSString *)arg3;
- (void)searchResultsController:(PSSpotlightSearchResultsController *)arg1 didSelectURL:(NSURL *)arg2;
@end
