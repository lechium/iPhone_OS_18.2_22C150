//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDSModeAssertionUpdateResult;

@protocol DNDSModeAssertionUpdating <NSObject>
- (DNDSModeAssertionUpdateResult *)updateModeAssertionsWithContextHandler:(_Bool (^)(id <DNDSModeAssertionUpdateContext>))arg1 error:(id *)arg2;
@end
