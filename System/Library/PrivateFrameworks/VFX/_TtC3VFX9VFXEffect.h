//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, _TtC3VFX8VFXScene;
@protocol _TtP3VFX17VFXEffectDelegate_;

@interface _TtC3VFX9VFXEffect : NSObject
{
    MISSING_TYPE *effectID;	// 8 = 0x8
    MISSING_TYPE *url;	// 0 = 0x0
    MISSING_TYPE *rootEntity;	// 0 = 0x0
    MISSING_TYPE *entityObject;	// 0 = 0x0
    MISSING_TYPE *scene;	// 1752457055 = 0x68745f5f
    MISSING_TYPE *delegate;	// 1952539743 = 0x7461645f
    MISSING_TYPE *name;	// 8 = 0x8
    MISSING_TYPE *version;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *onEffectRestartSubject;	// 0 = 0x0
    MISSING_TYPE *cancellables;	// 0 = 0x0
    MISSING_TYPE *_enabled;	// 16296248 = 0xf8a938
    MISSING_TYPE *_tombstoned;	// 16296248 = 0xf8a938
}

- (void).cxx_destruct;	// IMP=0x00000000008dc950
- (void)dump;	// IMP=0x00000000008dc8f0
- (id)allCameraNamed:(id)arg1;	// IMP=0x00000000008dc460
@property(nonatomic, readonly) NSArray *cameras;
@property(nonatomic) _Bool isTombstoned;
@property(nonatomic) _Bool isEnabled;
- (void)setClientTextureWithId:(long long)arg1 texture:(id)arg2;	// IMP=0x00000000008da610
- (long long)fetchClientTextureIDWithNamed:(id)arg1;	// IMP=0x00000000008da500
- (_Bool)isEnabled:(id)arg1;	// IMP=0x00000000008da310
- (void)setEnabled:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x00000000008da220
- (void)withPointerToParameterOf:(id)arg1 named:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000008da030
- (void)setParameterOf:(long long)arg1 named:(id)arg2 type:(long long)arg3 size:(long long)arg4 with:(CDUnknownBlockType)arg5;	// IMP=0x00000000008d9e90
- (void)setParameterOf:(long long)arg1 named:(id)arg2 with:(CDUnknownBlockType)arg3;	// IMP=0x00000000008d9d30
- (void)parameterOf:(long long)arg1 named:(id)arg2 type:(long long)arg3 with:(CDUnknownBlockType)arg4;	// IMP=0x00000000008d9bf0
- (void)parameterOf:(long long)arg1 named:(id)arg2 with:(CDUnknownBlockType)arg3;	// IMP=0x00000000008d9ab0
- (long long)lookupObjectIDByName:(id)arg1;	// IMP=0x00000000008d99d0
- (void)setParameterOf:(id)arg1 named:(id)arg2:(id)arg3;	// IMP=0x00000000008d9630
- (id)parameterOf:(id)arg1 named:(id)arg2;	// IMP=0x00000000008d9490
@property(nonatomic, readonly) NSArray *bindings;
- (id)firstBindingWithName:(id)arg1;	// IMP=0x00000000008d8d90
- (id)bindingWith:(long long)arg1 named:(id)arg2;	// IMP=0x00000000008d8c60
- (id)bindingOf:(id)arg1 named:(id)arg2;	// IMP=0x00000000008d8b10
@property(nonatomic) _Bool allowRemoteEdition;
- (id)init;	// IMP=0x00000000008d8330
@property(nonatomic) long long version; // @synthesize version;
@property(nonatomic, retain) id <_TtP3VFX17VFXEffectDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) __weak _TtC3VFX8VFXScene *scene; // @synthesize scene;
@property(nonatomic, readonly) long long rootObjectID;
@property(nonatomic, readonly) long long identifier;

@end

