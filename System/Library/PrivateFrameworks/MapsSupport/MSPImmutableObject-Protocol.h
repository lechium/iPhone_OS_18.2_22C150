//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/MSPIdentifiable-Protocol.h>
#import <MapsSupport/NSMutableCopying-Protocol.h>

@class Protocol;

@protocol MSPImmutableObject <MSPIdentifiable, NSMutableCopying>
+ (Protocol *)mutableObjectProtocol;
+ (Class)mutableObjectClass;
- (id)mutableCopy;
@end
