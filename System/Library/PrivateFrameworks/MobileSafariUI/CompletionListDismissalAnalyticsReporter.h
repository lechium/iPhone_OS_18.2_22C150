//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CompletionListDismissalAnalyticsReporter : NSObject
{
    _Bool _goKeyTapped;	// 8 = 0x8
    _Bool _acceptedCompletionListItem;	// 9 = 0x9
    long long _unifiedFieldContentType;	// 16 = 0x10
}

@property(nonatomic) long long unifiedFieldContentType; // @synthesize unifiedFieldContentType=_unifiedFieldContentType;
@property(nonatomic) _Bool acceptedCompletionListItem; // @synthesize acceptedCompletionListItem=_acceptedCompletionListItem;
- (void)reportAnalytics;	// IMP=0x0000000000228674

@end
