//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlay/NSObject-Protocol.h>

@class CPListTemplate, NSUUID;

@protocol CPListItemPrivate <NSObject>
- (void)_setNeedsUpdate;
- (void)setListTemplate:(CPListTemplate *)arg1;
- (CPListTemplate *)listTemplate;
- (NSUUID *)identifier;
@end
