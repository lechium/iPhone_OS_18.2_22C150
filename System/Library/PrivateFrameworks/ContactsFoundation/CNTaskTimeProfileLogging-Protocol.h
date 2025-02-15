//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class CNTask, NSError;

@protocol CNTaskTimeProfileLogging <NSObject>
- (void)task:(CNTask *)arg1 didFailWithError:(NSError *)arg2 after:(double)arg3;
- (void)task:(CNTask *)arg1 didCompleteAfter:(double)arg2;
- (void)taskWillBegin:(CNTask *)arg1;
@end

