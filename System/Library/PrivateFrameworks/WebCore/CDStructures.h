//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVVideoCaptureSource;

struct AdditionalNetworkLoadMetricsForWebInspector;

struct ArchiveResource;

struct Atomic<bool> {
    struct atomic<bool> value;
};

struct Atomic<unsigned char> {
    struct atomic<unsigned char> value;
};

struct AuthenticationClient {
    CDUnknownFunctionPointerType *_field1;
};

struct BinarySemaphore {
    _Bool m_isSet;
    struct Lock m_lock;
    struct Condition m_condition;
};

struct BlockPtr<void ()> {
    CDUnknownBlockType m_block;
};

struct BlockPtr<void (__CVBuffer *, long long, long long, bool)> {
    CDUnknownBlockType m_block;
};

struct BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)> {
    CDUnknownBlockType m_block;
};

struct BlockPtr<void (void (^)(NSURL *, NSError *))> {
    CDUnknownBlockType m_block;
};

struct BoundaryPoint {
    struct Ref<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> _field1;
    unsigned int _field2;
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct CharacterOffset {
    struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct CheckedPtr<WebCore::LowPowerModeNotifier, WTF::RawPtrTraits<WebCore::LowPowerModeNotifier>> {
    struct LowPowerModeNotifier *m_ptr;
};

struct Client {
    CDUnknownFunctionPointerType *_field1;
};

struct Condition {
    struct Atomic<bool> m_hasWaiters;
};

struct DataSegment;

struct DefaultWeakPtrImpl;

struct FloatPoint {
    float _field1;
    float _field2;
};

struct FloatRect {
    struct FloatPoint _field1;
    struct FloatSize _field2;
};

struct FloatSize {
    float _field1;
    float _field2;
};

struct Function<void ()> {
    struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> m_callableWrapper;
};

struct HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTableTraits> {
    struct HashTable<WTF::RefPtr<WTF::SchedulePair>, WTF::RefPtr<WTF::SchedulePair>, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>> m_impl;
};

struct HashTable<WTF::RefPtr<WTF::SchedulePair>, WTF::RefPtr<WTF::SchedulePair>, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>> {
    union {
        void *m_table;
        unsigned int *m_tableForLLDB;
    } ;
};

struct LocalFrame;

struct LocalSampleBufferDisplayLayer;

struct Lock {
    struct Atomic<unsigned char> m_byte;
};

struct LowPowerModeNotifier;

struct MediaPlayerPrivateAVFoundationObjC;

struct MediaSessionHelperIOS;

struct MonotonicTime {
    double m_value;
};

struct NakedPtr<WebCore::LocalFrame> {
    struct LocalFrame *_field1;
};

struct NetworkLoadMetrics {
    struct MonotonicTime redirectStart;
    struct MonotonicTime fetchStart;
    struct MonotonicTime domainLookupStart;
    struct MonotonicTime domainLookupEnd;
    struct MonotonicTime connectStart;
    struct MonotonicTime secureConnectionStart;
    struct MonotonicTime connectEnd;
    struct MonotonicTime requestStart;
    struct MonotonicTime responseStart;
    struct MonotonicTime responseEnd;
    struct MonotonicTime workerStart;
    struct String protocol;
    unsigned short redirectCount;
    unsigned int complete:1;
    unsigned int cellular:1;
    unsigned int expensive:1;
    unsigned int constrained:1;
    unsigned int multipath:1;
    unsigned int isReusedConnection:1;
    unsigned int failsTAOCheck:1;
    unsigned int hasCrossOriginRedirect:1;
    unsigned char privacyStance;
    unsigned long long responseBodyBytesReceived;
    unsigned long long responseBodyDecodedSize;
    struct RefPtr<WebCore::AdditionalNetworkLoadMetricsForWebInspector, WTF::RawPtrTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>, WTF::DefaultRefDerefTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>> additionalNetworkLoadMetricsForWebInspector;
};

struct Node;

struct ObjectIdentifierGeneric<WebCore::AXIDType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::Yes> {
    unsigned long long m_identifier;
};

struct ObjectIdentifierGeneric<WebCore::SpeechRecognitionConnectionClientIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::Yes> {
    unsigned long long m_identifier;
};

struct PlatformMediaResource;

struct PlatformSpeechSynthesisUtterance;

struct Position {
    struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> _field1;
    unsigned int _field2;
    unsigned int :3;
    unsigned int :1;
};

struct Ref<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> {
    struct Node *_field1;
};

struct RefCountedSerialFunctionDispatcher {
    CDUnknownFunctionPointerType *_field1;
};

struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> {
    struct DefaultWeakPtrImpl *m_ptr;
};

struct RefPtr<WTF::RefCountedSerialFunctionDispatcher, WTF::RawPtrTraits<WTF::RefCountedSerialFunctionDispatcher>, WTF::DefaultRefDerefTraits<WTF::RefCountedSerialFunctionDispatcher>> {
    struct RefCountedSerialFunctionDispatcher *m_ptr;
};

struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> {
    struct StringImpl *m_ptr;
};

struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> {
    struct ThreadSafeWeakPtrControlBlock *m_ptr;
};

struct RefPtr<WTF::WorkQueue, WTF::RawPtrTraits<WTF::WorkQueue>, WTF::DefaultRefDerefTraits<WTF::WorkQueue>> {
    struct WorkQueue *m_ptr;
};

struct RefPtr<WebCore::AdditionalNetworkLoadMetricsForWebInspector, WTF::RawPtrTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>, WTF::DefaultRefDerefTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>> {
    struct AdditionalNetworkLoadMetricsForWebInspector *m_ptr;
};

struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> {
    struct ArchiveResource *m_ptr;
};

struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> {
    struct Node *_field1;
};

struct RefPtr<WebCore::PlatformMediaResource, WTF::RawPtrTraits<WebCore::PlatformMediaResource>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResource>> {
    struct PlatformMediaResource *m_ptr;
};

struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::RawPtrTraits<WebCore::PlatformSpeechSynthesisUtterance>, WTF::DefaultRefDerefTraits<WebCore::PlatformSpeechSynthesisUtterance>> {
    struct PlatformSpeechSynthesisUtterance *m_ptr;
};

struct RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::RawPtrTraits<WebCore::SynchronousLoaderMessageQueue>, WTF::DefaultRefDerefTraits<WebCore::SynchronousLoaderMessageQueue>> {
    struct SynchronousLoaderMessageQueue *m_ptr;
};

struct RefPtr<WebCore::VideoPresentationInterfaceAVKit, WTF::RawPtrTraits<WebCore::VideoPresentationInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::VideoPresentationInterfaceAVKit>> {
    struct VideoPresentationInterfaceAVKit *_field1;
};

struct RefPtr<const WebCore::DataSegment, WTF::RawPtrTraits<const WebCore::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::DataSegment>> {
    struct DataSegment *m_ptr;
};

struct RetainPtr<AVPlayer> {
    void *m_ptr;
};

struct RetainPtr<AVPlayerLayer> {
    void *m_ptr;
};

struct RetainPtr<AVPlayerViewController> {
    void *m_ptr;
};

struct RetainPtr<AVRouteDetector> {
    void *m_ptr;
};

struct RetainPtr<AVSpeechSynthesizer> {
    void *m_ptr;
};

struct RetainPtr<CALayer> {
    void *m_ptr;
};

struct RetainPtr<CLLocationManager> {
    void *m_ptr;
};

struct RetainPtr<NSArray<NSString *>> {
    void *m_ptr;
};

struct RetainPtr<NSCachedURLResponse> {
    void *m_ptr;
};

struct RetainPtr<NSData> {
    void *m_ptr;
};

struct RetainPtr<NSError> {
    void *m_ptr;
};

struct RetainPtr<NSItemProvider> {
    void *m_ptr;
};

struct RetainPtr<NSMutableDictionary<NSString *, NSURL *>> {
    void *m_ptr;
};

struct RetainPtr<NSString> {
    void *m_ptr;
};

struct RetainPtr<NSTimer> {
    void *m_ptr;
};

struct RetainPtr<NSURLRequest> {
    void *m_ptr;
};

struct RetainPtr<NSURLResponse> {
    void *m_ptr;
};

struct RetainPtr<NSUUID> {
    void *m_ptr;
};

struct RetainPtr<OpaqueVTDecompressionSession *> {
    void *m_ptr;
};

struct RetainPtr<SBSStatusBarStyleOverridesAssertion> {
    void *m_ptr;
};

struct RetainPtr<SBSStatusBarStyleOverridesCoordinator> {
    void *m_ptr;
};

struct RetainPtr<SFSpeechAudioBufferRecognitionRequest> {
    void *m_ptr;
};

struct RetainPtr<SFSpeechRecognizer> {
    void *m_ptr;
};

struct RetainPtr<UITapGestureRecognizer> {
    void *m_ptr;
};

struct RetainPtr<UIViewController> {
    void *m_ptr;
};

struct RetainPtr<WebAVPlayerController> {
    void *m_ptr;
};

struct RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> {
    void *m_ptr;
};

struct RetainPtr<WebSpeechRecognizerTaskImpl> {
    void *m_ptr;
};

struct RetainPtr<const opaqueCMFormatDescription *> {
    void *m_ptr;
};

struct RetainPtr<id<NSItemProviderWriting>> {
    void *m_ptr;
};

struct SimpleRange {
    struct BoundaryPoint _field1;
    struct BoundaryPoint _field2;
};

struct String {
    struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> m_impl;
};

struct StringImpl;

struct SynchronousLoaderMessageQueue;

struct TextMarkerData {
    unsigned int treeID;
    unsigned int objectID;
    unsigned int offset;
    int anchorType;
    _Bool affinity;
    unsigned int characterStart;
    unsigned int characterOffset;
    _Bool ignored;
};

struct ThreadSafeWeakPtr<MediaSessionHelperIOS> {
    struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> m_controlBlock;
    struct MediaSessionHelperIOS *m_objectOfCorrectType;
};

struct ThreadSafeWeakPtr<WebCore::AVVideoCaptureSource> {
    struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> m_controlBlock;
    struct AVVideoCaptureSource *m_objectOfCorrectType;
};

struct ThreadSafeWeakPtr<WebCore::LocalSampleBufferDisplayLayer> {
    struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> m_controlBlock;
    struct LocalSampleBufferDisplayLayer *m_objectOfCorrectType;
};

struct ThreadSafeWeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC> {
    struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> m_controlBlock;
    struct MediaPlayerPrivateAVFoundationObjC *m_objectOfCorrectType;
};

struct ThreadSafeWeakPtr<WebCore::VideoPresentationInterfaceAVKit> {
    struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> m_controlBlock;
    struct VideoPresentationInterfaceAVKit *m_objectOfCorrectType;
};

struct ThreadSafeWeakPtrControlBlock;

struct TileController;

struct Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    void *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    void *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct Vector<WTF::RetainPtr<NSObject<WebSampleBufferVideoRendering>>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    void *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct VideoPresentationInterfaceAVKit;

struct VisiblePosition {
    struct Position _field1;
    _Bool _field2;
};

struct WeakObjCPtr<AVContentKeySession> {
    id m_weakReference;
};

struct WeakObjCPtr<SFSpeechRecognitionTask> {
    id m_weakReference;
};

struct WeakObjCPtr<WebAVPlayerViewControllerDelegate> {
    id m_weakReference;
};

struct WeakObjCPtr<WebCoreNSURLSession> {
    id m_weakReference;
};

struct WeakPtr<WebCore::AVContentKeySessionDelegateClient, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> {
    struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> m_impl;
};

struct WeakPtr<WebCore::AccessibilityObject, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> {
    struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> m_impl;
};

struct WeakPtr<WebCore::CaptionUserPreferencesMediaAF, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> {
    struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> m_impl;
};

struct WeakPtr<WebCore::ContentKeyGroupDataSource, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> {
    struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> m_impl;
};

struct WeakPtr<WebCore::MediaCaptureStatusBarManager, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> {
    struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> m_impl;
};

struct WeakPtr<WebCore::PlaybackSessionInterfaceIOS, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> {
    struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> m_impl;
};

struct WeakPtr<WebCore::PlaybackSessionModel, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> {
    struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> m_impl;
};

struct WeakPtr<WebCore::PreviewPlatformDelegate, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> {
    struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> m_impl;
};

struct WeakPtr<WebCore::QueuedVideoOutput, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> {
    struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> m_impl;
};

struct WeakPtr<WebCore::ReplayKitCaptureSource, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> {
    struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> m_impl;
};

struct WeakPtr<WebCore::WebAVSampleBufferListenerClient, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> {
    struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> m_impl;
};

struct WorkQueue;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct atomic<NSURLSessionTaskState> {
    struct __cxx_atomic_impl<NSURLSessionTaskState, std::__cxx_atomic_base_impl<NSURLSessionTaskState>> {
        _Atomic long long __a_value;
    } __a_;
};

struct atomic<bool> {
    struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
        _Atomic _Bool __a_value;
    } __a_;
};

struct atomic<unsigned char> {
    struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> {
        _Atomic unsigned char __a_value;
    } __a_;
};

struct optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash>> {
    union {
        char __null_state_;
        struct HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTableTraits> __val_;
    } ;
    _Bool __engaged_;
};

struct optional<WebCore::SimpleRange> {
    union {
        char _field1;
        struct SimpleRange _field2;
    } _field1;
    _Bool _field2;
};

struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> {
    struct __compressed_pair<WTF::Detail::CallableWrapperBase<void>*, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> {
    struct __compressed_pair<WebCore::TileController *, std::default_delete<WebCore::TileController>> {
        struct TileController *__value_;
    } __ptr_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    char *_field2;
    unsigned char _field3;
    char *_field4;
    id _field5;
} CDStruct_3707b61b;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

// Template types
typedef struct CheckedPtr<WebCore::LowPowerModeNotifier, WTF::RawPtrTraits<WebCore::LowPowerModeNotifier>> {
    struct LowPowerModeNotifier *m_ptr;
} CheckedPtr_19284049;

typedef struct NakedPtr<WebCore::LocalFrame> {
    struct LocalFrame *_field1;
} NakedPtr_349aab94;

typedef struct ObjectIdentifierGeneric<WebCore::AXIDType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::Yes> {
    unsigned long long m_identifier;
} ObjectIdentifierGeneric_ce77d0f4;

typedef struct ObjectIdentifierGeneric<WebCore::SpeechRecognitionConnectionClientIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::Yes> {
    unsigned long long m_identifier;
} ObjectIdentifierGeneric_c51cb688;

typedef struct RefPtr<WebCore::VideoPresentationInterfaceAVKit, WTF::RawPtrTraits<WebCore::VideoPresentationInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::VideoPresentationInterfaceAVKit>> {
    struct VideoPresentationInterfaceAVKit *_field1;
} RefPtr_44fcfd52;

typedef struct optional<WebCore::SimpleRange> {
    union {
        char _field1;
        struct SimpleRange _field2;
    } _field1;
    _Bool _field2;
} optional_c088adaa;
