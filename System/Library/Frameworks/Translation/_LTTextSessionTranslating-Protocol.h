//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Translation/NSObject-Protocol.h>

@class _LTTextSession, _LTTextSessionRequest;

@protocol _LTTextSessionTranslating <NSObject>
- (void)translateRequest:(_LTTextSessionRequest *)arg1 forSession:(_LTTextSession *)arg2 perItemHandler:(void (^)(_LTTextResult *, unsigned long long, NSError *))arg3;
@end
