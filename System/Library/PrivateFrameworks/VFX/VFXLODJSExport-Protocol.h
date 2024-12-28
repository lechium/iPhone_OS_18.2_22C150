//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/JSExport-Protocol.h>

@class NSString, VFXModel;

@protocol VFXLODJSExport <JSExport>
+ (id)levelOfDetailWithModel:(VFXModel *)arg1 worldSpaceDistance:(float)arg2;
+ (id)levelOfDetailWithModel:(VFXModel *)arg1 screenSpaceRadius:(float)arg2;
@property(readonly) float worldSpaceDistance;
@property(readonly) float screenSpaceRadius;
@property(readonly) VFXModel *model;
- (id)copy;
- (id)valueForKeyPath:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
@end
