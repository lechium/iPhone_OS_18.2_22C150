//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSFileProviderEnumerator-Protocol.h>

@class NSFileProviderDomainVersion;

@protocol NSFileProviderPendingSetEnumerator <NSFileProviderEnumerator>
@property(readonly, nonatomic, getter=isMaximumSizeReached) _Bool maximumSizeReached;
@property(readonly, nonatomic) double refreshInterval;
@property(readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@end
