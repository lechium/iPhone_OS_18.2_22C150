//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Security/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol SecEscrowRequestable;

@protocol SecEscrowRequestable <NSObject>
+ (id <SecEscrowRequestable>)request:(id *)arg1;
- (_Bool)escrowCompletedWithinLastSeconds:(double)arg1;
- (_Bool)pendingEscrowUpload:(id *)arg1;
- (NSDictionary *)fetchStatuses:(id *)arg1;
- (_Bool)triggerEscrowUpdate:(NSString *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (_Bool)triggerEscrowUpdate:(NSString *)arg1 error:(id *)arg2;
@end

