//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXAbstractProviderSourceDelegate-Protocol.h>

@class CXAbstractProviderSource, CXAction;

@protocol CXAbstractProviderSourceDelegateInternal <CXAbstractProviderSourceDelegate>
- (void)providerSourceInvalidated:(CXAbstractProviderSource *)arg1;
- (void)providerSourceConnectionEnded:(CXAbstractProviderSource *)arg1;
- (void)providerSourceConnectionStarted:(CXAbstractProviderSource *)arg1;
- (void)providerSource:(CXAbstractProviderSource *)arg1 actionCompleted:(CXAction *)arg2;
@end

