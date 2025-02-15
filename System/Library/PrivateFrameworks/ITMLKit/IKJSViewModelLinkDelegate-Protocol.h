//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/NSObject-Protocol.h>

@class IKJSViewModelLink, NSDictionary;

@protocol IKJSViewModelLinkDelegate <NSObject>
- (void)didCloseViewModelLink:(IKJSViewModelLink *)arg1 withErrorDictionary:(NSDictionary *)arg2;

@optional
- (void)documentDidChangeForViewModelLink:(IKJSViewModelLink *)arg1;
- (void)responseDictionaryDidChangeForViewModelLink:(IKJSViewModelLink *)arg1;
@end

