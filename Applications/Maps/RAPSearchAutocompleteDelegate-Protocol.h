//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class RAPSearchAutocompleteResult, RAPSearchAutocompleteViewController;

@protocol RAPSearchAutocompleteDelegate <NSObject>
- (void)rapSearchAutocompleteViewController:(RAPSearchAutocompleteViewController *)arg1 finishedPickingAutocompleteResult:(RAPSearchAutocompleteResult *)arg2 isAutocompleteResult:(_Bool)arg3;

@optional
- (void)rapSearchAutocompleteViewControllerDidCancel:(RAPSearchAutocompleteViewController *)arg1;
@end
