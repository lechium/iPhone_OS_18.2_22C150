//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NAEquatable-Protocol.h>
#import <HomeUI/NAHashable-Protocol.h>
#import <HomeUI/NSObject-Protocol.h>

@class NSString;
@protocol HFIconDescriptor;

@protocol HFIconDescriptor <NSObject, NAEquatable, NAHashable>
@property(readonly, nonatomic) _Bool shouldForceLTR;
@property(readonly, nonatomic) NSString *identifier;

@optional
- (long long)compare:(id <HFIconDescriptor>)arg1;
- (id)iconDescriptorByMergingWithIconDescriptor:(id <HFIconDescriptor>)arg1;
@end
