//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/JSExport-Protocol.h>

@class NSArray, VFXNode;

@protocol VFXLookAtConstraintJSExport <JSExport>
+ (id)lookAtConstraintWithTarget:(VFXNode *)arg1;
@property(nonatomic) _Bool gimbalLockEnabled;
@property(nonatomic) NSArray *upVectorValue;
@property(nonatomic) NSArray *localFrontValue;
@property(nonatomic) NSArray *targetOffsetValue;
@property(retain, nonatomic) VFXNode *target;
@end

