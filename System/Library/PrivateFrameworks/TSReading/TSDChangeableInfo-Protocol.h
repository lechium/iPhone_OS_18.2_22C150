//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSDInfo-Protocol.h>

@class TSSPropertySet, TSSPropertySetChangeDetails;

@protocol TSDChangeableInfo <TSDInfo>
@property(readonly, nonatomic) _Bool isUserModifiable;
- (TSSPropertySetChangeDetails *)endCollectingChanges;
- (void)willChangeProperty:(int)arg1;
- (void)beginCollectingChanges;

@optional
@property(readonly, nonatomic) Class editorClass;
// Preceding property had unknown attributes: ?
// Original attribute string: T#,?,R,N

- (void)willChangeProperties:(TSSPropertySet *)arg1;
@end

