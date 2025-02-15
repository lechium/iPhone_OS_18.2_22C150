//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIMutableTraitsPrivate-Protocol.h>

@class NSObject, UIColor;
@protocol _UICGFloatTraitTokenProtocol, _UINSIntegerTraitTokenProtocol, _UINSUIntegerTraitTokenProtocol, _UIObjectTraitTokenProtocol;

@protocol UIMutableTraitsInternal <UIMutableTraitsPrivate>
@property(readonly, nonatomic) NSObject *_environmentWrapper;
@property(readonly, nonatomic) UIColor *_tintColor;
- (void)_setEnvironmentWrapper:(NSObject *)arg1;
- (void)_setTintColor:(UIColor *)arg1;
- (id)_objectForTraitToken:(id <_UIObjectTraitTokenProtocol>)arg1;
- (void)_setObject:(id)arg1 forTraitToken:(id <_UIObjectTraitTokenProtocol>)arg2;
- (unsigned long long)_valueForNSUIntegerTraitToken:(id <_UINSUIntegerTraitTokenProtocol>)arg1;
- (void)_setNSUIntegerValue:(unsigned long long)arg1 forTraitToken:(id <_UINSUIntegerTraitTokenProtocol>)arg2;
- (long long)_valueForNSIntegerTraitToken:(id <_UINSIntegerTraitTokenProtocol>)arg1;
- (void)_setNSIntegerValue:(long long)arg1 forTraitToken:(id <_UINSIntegerTraitTokenProtocol>)arg2;
- (double)_valueForCGFloatTraitToken:(id <_UICGFloatTraitTokenProtocol>)arg1;
- (void)_setCGFloatValue:(double)arg1 forTraitToken:(id <_UICGFloatTraitTokenProtocol>)arg2;
@end

