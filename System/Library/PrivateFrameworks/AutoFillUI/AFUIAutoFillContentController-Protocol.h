//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol AFUIModalUIDelegate;

@protocol AFUIAutoFillContentController
@property(nonatomic) __weak id <AFUIModalUIDelegate> modalUIDelegate;

@optional
- (void)generateInitialMenu:(void (^)(UIMenu *))arg1 menuChanged:(void (^)(UIMenu *))arg2;
- (_Bool)hasSuggestions;
@end

