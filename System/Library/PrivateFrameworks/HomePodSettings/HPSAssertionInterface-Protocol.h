//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomePodSettings/NSObject-Protocol.h>

@class NSString;

@protocol HPSAssertionInterface <NSObject>
- (void)invalidateAssertionOfType:(unsigned long long)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)takeAssertionWithIdentifier:(NSString *)arg1 forAssertion:(unsigned long long)arg2;
@end
