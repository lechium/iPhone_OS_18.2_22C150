//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface VFXMTLShaderBindingsGenerator : NSObject
{
    struct os_unfair_lock_s _generateLock;	// 8 = 0x8
    struct {
        int stage;
        NSArray *bindings;
        NSDictionary *customBlocks;
        struct __CFXFXPass *pass;
    } _current;	// 16 = 0x10
    NSMutableDictionary *_nodeBindings;	// 48 = 0x30
    NSMutableDictionary *_frameBindings;	// 56 = 0x38
    NSMutableDictionary *_shadableBindings;	// 64 = 0x40
    NSMutableDictionary *_passBindings;	// 72 = 0x48
    NSMutableDictionary *_lightBindings;	// 80 = 0x50
    CDStruct_21854d8c _worldBuffer;	// 88 = 0x58
}

+ (void)registerShadableArgumentBindingBlockForBuffers:(CDUnknownBlockType)arg1 textures:(CDUnknownBlockType)arg2 samplers:(CDUnknownBlockType)arg3;	// IMP=0x006000000026610e
+ (void)registerUserBlockTrampoline:(CDUnknownBlockType)arg1;	// IMP=0x00600000002660f9
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x006000000026605c
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0060000000265fc3
+ (void)registerSemantic:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0060000000265f51
+ (void)deallocateRegistry;	// IMP=0x0060000000265ef5
+ (void)allocateRegistry;	// IMP=0x0060000000265e7b
- (_Bool)addPassResourceBindingsForArgument:(id)arg1;	// IMP=0x0000000000267817
- (void)addResourceBindingsForArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000267612
- (void)_checkForAssociatedSamplerOnBinding:(id)arg1 argument:(id)arg2;	// IMP=0x000000000026755f
- (id)_dictionaryForFrequency:(int)arg1;	// IMP=0x0000000000267542
- (void)generateBindingsForPipeline:(id)arg1 withReflection:(id)arg2 program:(struct __CFXFXProgram *)arg3 material:(struct __CFXMaterial *)arg4 geometry:(struct __CFXGeometry *)arg5 pass:(struct __CFXFXPass *)arg6;	// IMP=0x0000000000267245
- (void)_parseBindings:(id)arg1 function:(id)arg2 renderPipeline:(id)arg3;	// IMP=0x000000000026653d
- (long long)_searchBindings:(id)arg1 forArgumentNamed:(id)arg2 type:(long long)arg3;	// IMP=0x000000000026629f
- (void)dealloc;	// IMP=0x0000000000266240
- (id)init;	// IMP=0x000000000026614d

@end
