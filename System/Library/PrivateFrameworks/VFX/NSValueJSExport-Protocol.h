//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/JSExport-Protocol.h>

@class NSArray;

@protocol NSValueJSExport <JSExport>
+ (id)valueWithMatrix4:(NSArray *)arg1;
+ (id)valueWithVector4:(NSArray *)arg1;
+ (id)valueWithVector3:(NSArray *)arg1;
@property(readonly) NSArray *matrix4;
@property(readonly) NSArray *vector4;
@property(readonly) NSArray *vector3;
@end
