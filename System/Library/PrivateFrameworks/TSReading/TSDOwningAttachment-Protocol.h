//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@protocol TSDOwningAttachment <NSObject>
@property(readonly, nonatomic) unsigned long long enabledKnobMask;
@property(readonly, nonatomic) _Bool specifiesEnabledKnobMask;
@property(readonly, nonatomic) _Bool isSearchable;
@property(readonly, nonatomic) Class positionerClass;
@property(readonly, nonatomic) _Bool isAttachedToBodyText;
@property(readonly, nonatomic) _Bool isPartitioned;
@property(readonly, nonatomic) _Bool isAnchored;
@property(readonly, nonatomic) _Bool isDrawable;
- (void)infoChanged;
@end

