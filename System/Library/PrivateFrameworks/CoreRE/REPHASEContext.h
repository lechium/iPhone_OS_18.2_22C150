//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, PHASECardioidDirectivityModelParameters, PHASEEngine, PHASEListener, PHASENumberMetaParameterDefinition;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface REPHASEContext : NSObject
{
    PHASEEngine *_engine;	// 8 = 0x8
    int _mixerDefNameCounter;	// 16 = 0x10
    struct atomic<bool> _stoppedAndDestroyed;	// 20 = 0x14
    struct UnfairLock _scenesMutex;	// 24 = 0x18
    struct unordered_map<unsigned long long, std::shared_ptr<re::audio::REPHASEAudioScene>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::shared_ptr<re::audio::REPHASEAudioScene>>>> _scenes;	// 32 = 0x20
    struct UnfairLock _shapesMutex;	// 72 = 0x48
    unordered_map_cc982a0d _shapes;	// 80 = 0x50
    struct unordered_map<unsigned long long, REPHASESoundEvent *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, REPHASESoundEvent *>>> _soundEvents;	// 120 = 0x78
    struct UnfairLock _soundEventsMutex;	// 160 = 0xa0
    struct unordered_map<unsigned long long, RESoundEventPreparingData, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, RESoundEventPreparingData>>> _soundEventsPreparing;	// 168 = 0xa8
    struct UnfairLock _soundEventsPreparingMutex;	// 208 = 0xd0
    struct unordered_map<unsigned long long, REPHASESoundAsset, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, REPHASESoundAsset>>> _audioAssets;	// 216 = 0xd8
    struct UnfairLock _audioAssetsMutex;	// 256 = 0x100
    struct UnfairLock _audioEngineMutex;	// 260 = 0x104
    struct REPHASEMaterialCache _phaseMaterialCache;	// 264 = 0x108
    struct REPHASESpatialMixerDefinitionCache _spatialMixerDefinitionCache;	// 280 = 0x118
    long long _reverbPreset;	// 304 = 0x130
    _Bool _allowSpaceBlend;	// 312 = 0x138
    float _spaceBlendLevel;	// 316 = 0x13c
    _Bool _directpathEnabled;	// 320 = 0x140
    NSObject<OS_dispatch_queue> *_phaseQueue;	// 328 = 0x148
    shared_ptr_50bead45 _audioEngineRunnableManager;	// 336 = 0x150
    double _sampleRate;	// 352 = 0x160
    PHASENumberMetaParameterDefinition *_gainLinearParamDefinition;	// 360 = 0x168
    PHASENumberMetaParameterDefinition *_rateParamDefinition;	// 368 = 0x170
    PHASECardioidDirectivityModelParameters *_humanDirectivity;	// 376 = 0x178
    PHASEListener *_listener;	// 384 = 0x180
    PHASEListener *_simulatorListener;	// 392 = 0x188
    NSURL *_customHRIRURL;	// 400 = 0x190
}

- (id).cxx_construct;	// IMP=0x000000000044ee79
- (void).cxx_destruct;	// IMP=0x000000000044ed20
@property(retain, nonatomic) NSURL *customHRIRURL; // @synthesize customHRIRURL=_customHRIRURL;
@property(retain, nonatomic) PHASEListener *simulatorListener; // @synthesize simulatorListener=_simulatorListener;
@property(readonly, nonatomic) PHASEListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) PHASECardioidDirectivityModelParameters *humanDirectivity; // @synthesize humanDirectivity=_humanDirectivity;
@property(readonly, nonatomic) PHASENumberMetaParameterDefinition *rateParamDefinition; // @synthesize rateParamDefinition=_rateParamDefinition;
@property(readonly, nonatomic) PHASENumberMetaParameterDefinition *gainLinearParamDefinition; // @synthesize gainLinearParamDefinition=_gainLinearParamDefinition;
@property(readonly, nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (void)decrementOrDestroyEntityWithZeroCount:(unsigned long long)arg1;	// IMP=0x000000000044ec55
- (shared_ptr_6586e3f4)_getEntityUnderLock:(unsigned long long)arg1;	// IMP=0x000000000044ec03
- (shared_ptr_6586e3f4)getEntity:(unsigned long long)arg1;	// IMP=0x000000000044eba7
- (id)sourceObjectForEntityID:(unsigned long long)arg1;	// IMP=0x000000000044eb2e
- (void)getSourceCount:(unsigned int *)arg1 occluderCount:(unsigned int *)arg2;	// IMP=0x000000000044ea8e
- (void)removeSessionRoot:(unsigned long long)arg1;	// IMP=0x000000000044ea33
- (id)getSessionRoot:(unsigned long long)arg1;	// IMP=0x000000000044e9bc
- (id)getSimulatorListener;	// IMP=0x000000000044e85e
- (void)removeListener;	// IMP=0x000000000044e825
- (void)applySimulatorListenerTransform:(const CDStruct_14d5dc5e *)arg1;	// IMP=0x000000000044e79f
- (id)getSimulatorClientListener;	// IMP=0x000000000044e765
- (id)getListener;	// IMP=0x000000000044e706
- (_Bool)engineShouldBeRunning;	// IMP=0x000000000044e527
- (_Bool)isListenerCreatedInScene;	// IMP=0x000000000044e4c3
- (void)removeEntity:(unsigned long long)arg1;	// IMP=0x000000000044e468
- (void)createListenerIfPending;	// IMP=0x000000000044e3c9
- (double)doubleFromPlistValue:(id)arg1 defaultValue:(double)arg2;	// IMP=0x000000000044e352
- (void)loadHumanDirectivityPlistFromURL:(id)arg1;	// IMP=0x000000000044dd5d
- (void)applyCustomHRIR;	// IMP=0x000000000044dc85
- (id)getOrCreateSpatialMixerDefinitionUsing:(const void *)arg1;	// IMP=0x000000000044da4b
- (void)clearPreparingStateForToken:(unsigned long long)arg1;	// IMP=0x000000000044da08
- (void)setPreparingWithData:(struct RESoundEventPreparingData)arg1 forToken:(unsigned long long)arg2;	// IMP=0x000000000044d40d
- (_Bool)addEventIfStillPreparing:(id)arg1 forToken:(unsigned long long)arg2;	// IMP=0x000000000044cdef
- (_Bool)doCleanUpSoundEventForToken:(unsigned long long)arg1 ifNotInScene:(unsigned long long)arg2;	// IMP=0x000000000044c9ff
- (unordered_set_ed874b88)playbackClientsWithPreparedOrPreparingSounds;	// IMP=0x000000000044c8ca
- (unsigned int)getPreparingSoundEventsCount;	// IMP=0x000000000044c89c
- (unsigned int)getPlayingSoundEventsCount;	// IMP=0x000000000044c812
- (unsigned long long)uniqueEventCount;	// IMP=0x000000000044c739
- (_Bool)eventBeingPrepared:(unsigned long long)arg1;	// IMP=0x000000000044c6ed
- (id)eventFor:(unsigned long long)arg1;	// IMP=0x000000000044c68e
- (void)prepareFileType:(shared_ptr_a4f68b3a)arg1 phaseEntity:(shared_ptr_6586e3f4)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000044bb14
- (void)prepareGeneratorType:(shared_ptr_a4f68b3a)arg1 phaseEntity:(shared_ptr_6586e3f4)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000044b258
- (void)prepareFileGroupType:(shared_ptr_a4f68b3a)arg1 phaseEntity:(shared_ptr_6586e3f4)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000044a522
- (void)prepareExternalType:(shared_ptr_a4f68b3a)arg1 phaseEntity:(shared_ptr_6586e3f4)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000449a1d
- (void)prepare:(shared_ptr_a4f68b3a)arg1;	// IMP=0x0000000000448938
- (id)mixerParametersForPrepareState:(const void *)arg1 source:(id)arg2 listener:(id)arg3 mixerIdentifiers:(id)arg4;	// IMP=0x0000000000448630
- (id)samplerDefForFileAsset:(unsigned long long)arg1 mixerDefinition:(id)arg2 prepareState:(const void *)arg3;	// IMP=0x00000000004481fa
- (id)samplerDefForFileAsset:(unsigned long long)arg1 with:(const void *)arg2;	// IMP=0x0000000000448170
- (id)createSamplerDefinitionForToken:(unsigned long long)arg1;	// IMP=0x0000000000447f22
- (id)baseMixerDefinitionWith:(const void *)arg1;	// IMP=0x000000000044767a
- (void)applySpaceBlendLevel;	// IMP=0x000000000044748a
- (void)applyReverbPreset;	// IMP=0x00000000004472de
- (void)setSpaceBlendTargetPresetOrientation:(CDStruct_183601bc)arg1;	// IMP=0x0000000000447271
- (void)setSpaceBlendLevel:(float)arg1;	// IMP=0x0000000000447246
- (float)getSpaceBlendLevel;	// IMP=0x0000000000447238
- (void)setReverbPreset:(long long)arg1 allowingSpaceBlend:(_Bool)arg2;	// IMP=0x0000000000447159
- (long long)getReverbPreset;	// IMP=0x000000000044714c
- (void)removeAudioAssetID:(unsigned long long)arg1;	// IMP=0x0000000000446fa4
- (_Bool)getConfigurationForAudioAssetID:(unsigned long long)arg1 configuration:(void *)arg2;	// IMP=0x0000000000446ef2
- (void)addAudioAssetID:(unsigned long long)arg1 configuration:(const void *)arg2;	// IMP=0x00000000004467f4
- (id)phaseIDForAssetID:(unsigned long long)arg1;	// IMP=0x00000000004467cf
- (shared_ptr_347937b1)sceneForID:(unsigned long long)arg1;	// IMP=0x00000000004460bb
- (void)stopAllAndReset;	// IMP=0x0000000000445da2
- (DynamicArray_b9ce0c9c)updatePHASEOccluders:(const void *)arg1;	// IMP=0x0000000000445c57
- (struct PHASEOccluderUpdateData)createPHASEOccluderUpdateData:(const void *)arg1;	// IMP=0x0000000000445ac7
- (DynamicArray_799408e4)createPHASEOccluders:(const void *)arg1;	// IMP=0x0000000000445977
- (struct PHASEOccluderData)createPHASEOccluderData:(const void *)arg1;	// IMP=0x0000000000445889
- (id)createPHASEShapeAndOccluder:(const void *)arg1;	// IMP=0x0000000000445528
- (id)createPHASEShape:(const void *)arg1;	// IMP=0x0000000000445495
- (id)createPhaseShapeWithMeshID:(unsigned long long)arg1 materials:(id)arg2 mdlMesh:(id)arg3 arkitMesh:(_Bool)arg4 meshType:(unsigned char)arg5;	// IMP=0x0000000000444fba
- (id)createAcousticMaterialsArrayWithAbsorption:(DynamicArray_6b16cae3)arg1 scattering:(DynamicArray_0b120cb5)arg2 soundReduction:(DynamicArray_df95d833)arg3;	// IMP=0x0000000000444ef9
- (void)applyMeshEvents:(const void *)arg1;	// IMP=0x0000000000444e18
- (void)applyOccluderUpdates:(const void *)arg1;	// IMP=0x0000000000444dc3
- (void)updateOccluder:(const void *)arg1;	// IMP=0x0000000000444d0e
- (void)applyOccluderAdditions:(const void *)arg1;	// IMP=0x0000000000444cb5
- (void)addOccluder:(const void *)arg1;	// IMP=0x0000000000444c95
- (void)addOccluder:(id)arg1 toScene:(unsigned long long)arg2 entity:(unsigned long long)arg3;	// IMP=0x000000000044496e
- (void)applyMeshRemovals:(const void *)arg1;	// IMP=0x0000000000444915
- (void)applyMeshRemoval:(const void *)arg1;	// IMP=0x00000000004448d0
- (void)removeOccluderFromScene:(unsigned long long)arg1 entity:(unsigned long long)arg2;	// IMP=0x0000000000444570
- (unordered_map_cc982a0d)copyPhaseShapeCache;	// IMP=0x0000000000444234
- (unsigned long long)phaseShapeCount;	// IMP=0x000000000044420a
- (void)removePhaseShapeFromCacheWithMeshID:(unsigned long long)arg1;	// IMP=0x0000000000443f56
- (id)getPhaseShapeFromCacheWithMeshID:(unsigned long long)arg1;	// IMP=0x0000000000443efa
- (void)addPhaseShapeToCache:(id)arg1 meshID:(unsigned long long)arg2 mesh:(id)arg3;	// IMP=0x0000000000443af9
- (void)clearPhaseShapeCache;	// IMP=0x0000000000443a98
- (void)update;	// IMP=0x000000000044387f
@property(readonly) PHASEEngine *engine;
@property(readonly) PHASEEngine *maybeEngine;
- (void)fillOutDebugInformation:(id)arg1;	// IMP=0x00000000004435a8
- (void)fillOutMeshBoundingBoxInformation:(id)arg1;	// IMP=0x0000000000442e40
- (id)initWithSampleRate:(double)arg1 phaseQueue:(id)arg2 audioEngineRunnableManager:(shared_ptr_50bead45)arg3;	// IMP=0x0000000000442c58

@end
