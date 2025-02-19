//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SampleAnalysis/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SABinaryLocator, SAFrame, SAMountStatusTracker, SASharedCache, SATask, SATimeRange, SATimestamp, SAWSUpdateDataStore;

@interface SASampleStore : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_tasksByUniquePid;
    NSMutableDictionary *_tasksByPid;
    NSMutableArray *_sampleTimestamps;
    unsigned long long _numSamples;
    SATimestamp *_startTime;
    SATimestamp *_endTime;
    NSMutableArray *_hidEvents;
    NSMutableArray *_fanSpeeds;
    NSMutableArray *_kernelCaches;
    NSMutableArray *_sharedCaches;
    SASharedCache *_mostRecentNativeSharedCache;
    SAWSUpdateDataStore *_wsDataStore;
    SABinaryLocator *_binaryLocator;
    NSMutableSet *_pidsToTrack;
    int _targetProcessId;
    unsigned long long _targetThreadId;
    struct mach_timebase_info _machTimebase;
    struct _CSArchitecture _arch;
    unsigned int _threadPolicyVersion;
    unsigned long long _previousSampleTimestamp;
    unsigned int _previousStackshotBufferSize;
    BOOL _sampleOnlyMainThreads;
    BOOL _nextSampleIsFirstSamplingAllThreads;
    BOOL _stackshotsOnlyIncludeSpecificProcesses;
    BOOL _nextSampleIsFirstSamplingAllProcesses;
    BOOL _keepStateBetweenSampleIndexes;
    BOOL _haveKPerfSched;
    double _sampleIntervalLimit;
    NSMutableArray *_namesToUseDsymForUUID;
    NSMutableArray *_idsToUseDsymForUUID;
    BOOL _bulkSymbolicationFailed;
    unsigned long long _numMicrostackshotsSkippedDueToMissingLoadInfos;
    unsigned long long _targetHIDEventMachAbs;
    BOOL _keepMicrostackshotsWithoutLoadInfo;
    BOOL _sanitizePaths;
    BOOL _omitSensitiveStrings;
    BOOL _shouldGatherKextStat;
    unsigned int _workQueueSoftThreadLimit;
    unsigned int _workQueueHardThreadLimit;
    unsigned int _numActiveCPUs;
    unsigned long long _dataSource;
    unsigned long long _dataStyle;
    double _attemptedSamplingInterval;
    NSString *_reason;
    double _lastWakeTime;
    SAMountStatusTracker *_mountStatusTracker;
    SAFrame *_cpuSignalHandlerStackLeafKernelFrame;
    unsigned long long _dataGatheringOptions;
    SATimestamp *_timeWhenTransitionedToSamplingAllThreads;
    SATimestamp *_timeWhenTransitionedToSamplingAllProcesses;
    NSString *_kextStat;
    NSString *_kernelVersion;
    NSString *_osProductName;
    NSString *_osProductVersion;
    NSString *_osBuildVersion;
    NSString *_hardwareModel;
    NSString *_bootArgs;
    unsigned long long _targetHIDEventEndMachAbs;
    SATask *_targetProcess;
    double _cpuUsed;
    double _cpuDuration;
    double _cpuLimit;
    double _cpuLimitDuration;
    unsigned long long _numWakeups;
    double _wakeupsDuration;
    unsigned long long _numWakeupsLimit;
    double _wakeupsLimitDuration;
    unsigned long long _bytesWritten;
    double _writeDuration;
    unsigned long long _bytesWrittenLimit;
    double _writeLimitDuration;
    NSString *_event;
    NSString *_eventNote;
    SATimeRange *_eventTimeRange;
    NSString *_signature;
    NSString *_actionTaken;
    double _extraDuration;
    NSString *_durationNote;
    NSString *_stepsNote;
    NSString *_targetProcessBundleVersion;
    NSString *_targetProcessBundleShortVersion;
    NSString *_targetProcessBundleBuildVersion;
    NSString *_targetProcessBundleProjectName;
    NSString *_targetProcessBundleSourceVersion;
    NSString *_targetProcessBundleProductBuildVersion;
    NSString *_targetProcessBundleId;
    NSString *_targetProcessCommerceAppID;
    NSString *_targetProcessCommerceExternalID;
    NSString *_targetProcessVendorID;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)canOpenFileAsKTraceFile:(const char *)arg1 errorOut:(id *)arg2;
+ (id)sampleStoreForSpindumpFile:(const char *)arg1;
@property(readonly) NSString *targetProcessVendorID; // @synthesize targetProcessVendorID=_targetProcessVendorID;
@property(readonly) NSString *targetProcessCommerceExternalID; // @synthesize targetProcessCommerceExternalID=_targetProcessCommerceExternalID;
@property(readonly) NSString *targetProcessCommerceAppID; // @synthesize targetProcessCommerceAppID=_targetProcessCommerceAppID;
@property(readonly) NSString *targetProcessBundleId; // @synthesize targetProcessBundleId=_targetProcessBundleId;
@property(readonly) NSString *targetProcessBundleProductBuildVersion; // @synthesize targetProcessBundleProductBuildVersion=_targetProcessBundleProductBuildVersion;
@property(readonly) NSString *targetProcessBundleSourceVersion; // @synthesize targetProcessBundleSourceVersion=_targetProcessBundleSourceVersion;
@property(readonly) NSString *targetProcessBundleProjectName; // @synthesize targetProcessBundleProjectName=_targetProcessBundleProjectName;
@property(readonly) NSString *targetProcessBundleBuildVersion; // @synthesize targetProcessBundleBuildVersion=_targetProcessBundleBuildVersion;
@property(readonly) NSString *targetProcessBundleShortVersion; // @synthesize targetProcessBundleShortVersion=_targetProcessBundleShortVersion;
@property(readonly) NSString *targetProcessBundleVersion; // @synthesize targetProcessBundleVersion=_targetProcessBundleVersion;
@property(copy) NSString *stepsNote; // @synthesize stepsNote=_stepsNote;
@property(copy) NSString *durationNote; // @synthesize durationNote=_durationNote;
@property double extraDuration; // @synthesize extraDuration=_extraDuration;
@property(copy) NSString *actionTaken; // @synthesize actionTaken=_actionTaken;
@property(copy) NSString *signature; // @synthesize signature=_signature;
@property(copy) SATimeRange *eventTimeRange; // @synthesize eventTimeRange=_eventTimeRange;
@property(copy) NSString *eventNote; // @synthesize eventNote=_eventNote;
@property(copy) NSString *event; // @synthesize event=_event;
@property double writeLimitDuration; // @synthesize writeLimitDuration=_writeLimitDuration;
@property unsigned long long bytesWrittenLimit; // @synthesize bytesWrittenLimit=_bytesWrittenLimit;
@property double writeDuration; // @synthesize writeDuration=_writeDuration;
@property unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property double wakeupsLimitDuration; // @synthesize wakeupsLimitDuration=_wakeupsLimitDuration;
@property unsigned long long numWakeupsLimit; // @synthesize numWakeupsLimit=_numWakeupsLimit;
@property double wakeupsDuration; // @synthesize wakeupsDuration=_wakeupsDuration;
@property unsigned long long numWakeups; // @synthesize numWakeups=_numWakeups;
@property double cpuLimitDuration; // @synthesize cpuLimitDuration=_cpuLimitDuration;
@property double cpuLimit; // @synthesize cpuLimit=_cpuLimit;
@property double cpuDuration; // @synthesize cpuDuration=_cpuDuration;
@property double cpuUsed; // @synthesize cpuUsed=_cpuUsed;
@property(readonly) SATask *targetProcess; // @synthesize targetProcess=_targetProcess;
@property unsigned long long targetHIDEventEndMachAbs; // @synthesize targetHIDEventEndMachAbs=_targetHIDEventEndMachAbs;
@property(copy) NSString *bootArgs; // @synthesize bootArgs=_bootArgs;
@property unsigned int numActiveCPUs; // @synthesize numActiveCPUs=_numActiveCPUs;
@property(copy) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(readonly) unsigned int workQueueHardThreadLimit; // @synthesize workQueueHardThreadLimit=_workQueueHardThreadLimit;
@property(readonly) unsigned int workQueueSoftThreadLimit; // @synthesize workQueueSoftThreadLimit=_workQueueSoftThreadLimit;
@property(copy) NSString *osBuildVersion; // @synthesize osBuildVersion=_osBuildVersion;
@property(copy) NSString *osProductVersion; // @synthesize osProductVersion=_osProductVersion;
@property(copy) NSString *osProductName; // @synthesize osProductName=_osProductName;
@property(readonly) NSString *kernelVersion; // @synthesize kernelVersion=_kernelVersion;
@property(readonly, copy) NSString *kextStat; // @synthesize kextStat=_kextStat;
@property BOOL shouldGatherKextStat; // @synthesize shouldGatherKextStat=_shouldGatherKextStat;
@property BOOL omitSensitiveStrings; // @synthesize omitSensitiveStrings=_omitSensitiveStrings;
@property BOOL sanitizePaths; // @synthesize sanitizePaths=_sanitizePaths;
@property(readonly) SATimestamp *timeWhenTransitionedToSamplingAllProcesses; // @synthesize timeWhenTransitionedToSamplingAllProcesses=_timeWhenTransitionedToSamplingAllProcesses;
@property(readonly) SATimestamp *timeWhenTransitionedToSamplingAllThreads; // @synthesize timeWhenTransitionedToSamplingAllThreads=_timeWhenTransitionedToSamplingAllThreads;
@property unsigned long long dataGatheringOptions; // @synthesize dataGatheringOptions=_dataGatheringOptions;
@property(readonly) SAFrame *cpuSignalHandlerStackLeafKernelFrame; // @synthesize cpuSignalHandlerStackLeafKernelFrame=_cpuSignalHandlerStackLeafKernelFrame;
@property BOOL keepMicrostackshotsWithoutLoadInfo; // @synthesize keepMicrostackshotsWithoutLoadInfo=_keepMicrostackshotsWithoutLoadInfo;
@property(readonly) SAMountStatusTracker *mountStatusTracker; // @synthesize mountStatusTracker=_mountStatusTracker;
@property(readonly) double lastWakeTime; // @synthesize lastWakeTime=_lastWakeTime;
@property(copy) NSString *reason; // @synthesize reason=_reason;
@property double attemptedSamplingInterval; // @synthesize attemptedSamplingInterval=_attemptedSamplingInterval;
@property unsigned long long dataStyle; // @synthesize dataStyle=_dataStyle;
@property unsigned long long dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSArray *sharedCaches; // @synthesize sharedCaches=_sharedCaches;
@property(readonly) NSArray *kernelCaches; // @synthesize kernelCaches=_kernelCaches;
@property(readonly) NSArray *hidEvents; // @synthesize hidEvents=_hidEvents;
@property(readonly) NSArray *sampleTimestamps; // @synthesize sampleTimestamps=_sampleTimestamps;
@property(readonly) NSDictionary *tasksByPid; // @synthesize tasksByPid=_tasksByPid;
@property(readonly) NSDictionary *tasksByUniquePid; // @synthesize tasksByUniquePid=_tasksByUniquePid;
- (void).cxx_destruct;
- (void)gatherBootArgs;
- (void)gatherNumActiveCPUs;
- (void)gatherHardwareModel;
- (void)gatherWorkQueueHardThreadLimit;
- (void)gatherWorkQueueSoftThreadLimit;
@property struct mach_timebase_info machTimebase; // @synthesize machTimebase=_machTimebase;
- (void)gatherMachineArchitecture;
@property(copy) NSString *machineArchitecture;
@property struct _CSArchitecture arch; // @synthesize arch=_arch;
- (void)gatherOsVersions;
- (void)gatherKernelVersion;
- (void)gatherKextStat;
- (void)symbolicate;
- (void)symbolicateViaBulkSymbolication:(id)arg1;
- (BOOL)findCpuSignalHandlerStackLeafKernelFrame;
- (long long)_addMicrostackshotFromData:(id)arg1 ofTypes:(int)arg2 inTimeRangeStart:(double)arg3 end:(double)arg4 onlyPid:(int)arg5 onlyTid:(unsigned long long)arg6;
- (long long)addMicrostackshotsFromData:(id)arg1 ofTypes:(int)arg2 inTimeRangeStart:(double)arg3 end:(double)arg4 onlyPid:(int)arg5 onlyTid:(unsigned long long)arg6;
- (int)addMicrostackshotsFromFile:(id)arg1 ofTypes:(int)arg2 inTimeRangeStart:(double)arg3 end:(double)arg4 onlyPid:(int)arg5 onlyTid:(unsigned long long)arg6;
- (unsigned long long)_addKCDataStackshot:(id)arg1 timestamp:(id)arg2 sampleIndex:(unsigned long long)arg3 shouldSkipSampleOut:(char *)arg4 backfillKPerf:(BOOL)arg5 addStaticInfoOnly:(BOOL)arg6;
- (unsigned long long)addKCDataStackshot:(id)arg1;
- (unsigned long long)addKCDataStackshot:(id)arg1 returningTimestamp:(id *)arg2;
- (unsigned long long)addKCDataStackshots:(id)arg1 createSeparateSamplePerStackshot:(BOOL)arg2;
- (void)addProcessInfoFromTailspin:(id)arg1;
- (unsigned long long)addKCDataThreadV4:(const struct thread_snapshot_v4 *)arg1 threadV2:(const struct thread_snapshot_v2 *)arg2 deltaThreadV3:(const struct thread_delta_snapshot_v3 *)arg3 deltaThreadV2:(const struct thread_delta_snapshot_v2 *)arg4 timestamp:(id)arg5 sampleIndex:(unsigned long long)arg6 stack:(id)arg7 threadName:(const char *)arg8 dispatchQueueLabel:(const char *)arg9 waitInfo:(const struct stackshot_thread_waitinfo *)arg10 instructionCycles:(const struct instrs_cycles_snapshot *)arg11 task:(id)arg12 kernelTask:(id)arg13 taskIsSuspended:(BOOL)arg14;
- (unsigned long long)indexOfLastSampleOnOrBeforeTimestamp:(id)arg1;
- (unsigned long long)indexOfFirstSampleOnOrAfterTimestamp:(id)arg1;
- (void)dealloc;
@property BOOL stackshotsOnlyIncludeSpecificProcesses;
@property BOOL sampleOnlyMainThreads;
- (id)initForFileParsing;
- (id)initForLiveSampling;
- (id)init;
- (id)firstTaskWithPid:(int)arg1 orTid:(unsigned long long)arg2;
- (id)lastTaskWithPid:(int)arg1 orTid:(unsigned long long)arg2;
- (id)taskWithPid:(int)arg1 orTid:(unsigned long long)arg2 atTimestamp:(id)arg3;
- (id)taskWithPid:(int)arg1 atTimestamp:(id)arg2;
- (id)taskWithUniquePid:(unsigned long long)arg1 atTimestamp:(id)arg2;
- (id)_firstTaskOnOrAfterTimestamp:(id)arg1 inTasks:(id)arg2;
- (id)firstTaskWithUniquePid:(unsigned long long)arg1 onOrAfterTimestamp:(id)arg2;
- (id)firstTaskWithPid:(int)arg1 onOrAfterTimestamp:(id)arg2;
- (id)firstTaskWithPid:(int)arg1;
- (id)firstTaskWithUniquePid:(unsigned long long)arg1;
- (id)_lastTaskOnOrBeforeTimestamp:(id)arg1 inTasks:(id)arg2;
- (id)lastTaskWithUniquePid:(unsigned long long)arg1 onOrBeforeTimestamp:(id)arg2;
- (id)lastTaskWithPid:(int)arg1 onOrBeforeTimestamp:(id)arg2;
- (id)lastTaskWithPid:(int)arg1;
- (id)lastTaskWithUniquePid:(unsigned long long)arg1;
- (id)taskForMicrostackshotTask:(const struct task_snapshot *)arg1 loadInfos:(const struct dyld_uuid_info_64 *)arg2 numLoadInfos:(unsigned int)arg3 machineArchitecture:(struct _CSArchitecture)arg4 sharedCache:(id)arg5;
- (id)taskForKCDataDeltaTask:(const struct task_delta_snapshot_v2 *)arg1 loadInfos:(const struct dyld_uuid_info_64 *)arg2 numLoadInfos:(unsigned int)arg3 machineArchitecture:(struct _CSArchitecture)arg4 timestamp:(id)arg5 sharedCache:(id)arg6;
- (id)taskForKCDataTask:(const struct task_snapshot_v2 *)arg1 loadInfos:(const struct dyld_uuid_info_64 *)arg2 numLoadInfos:(unsigned int)arg3 machineArchitecture:(struct _CSArchitecture)arg4 timestamp:(id)arg5 sharedCache:(id)arg6;
- (void)postprocess;
- (void)gatherExtraInfoForTargetProcess:(id)arg1;
- (void)finishedSamplingLiveSystem;
- (void)startingSamplingLiveSystem;
- (void)printFrameRateReportWithStartSampleIndex:(unsigned long long)arg1 endSampleIndex:(unsigned long long)arg2 startDisplayIndex:(unsigned long long)arg3 toStream:(id)arg4;
- (void)addAuxiliaryData:(id)arg1;
- (BOOL)cacheLoadInfoForProcess:(int)arg1;
@property(readonly) NSString *targetProcessBundleName;
@property(readonly) NSString *targetProcessAbsolutePath;
@property(readonly) NSString *targetProcessName;
- (void)findTargetProcessInTimeRange:(id)arg1;
- (void)findTargetProcess;
@property int targetProcessId;
@property unsigned long long targetThreadId;
- (BOOL)setTargetProcessWithHint:(id)arg1;
- (id)fanSpeedClosestToTimestamp:(id)arg1;
- (void)useDsymForUUIDFor:(id)arg1;
- (void)enumerateTasks:(CDUnknownBlockType)arg1;
- (BOOL)isEmpty;
- (void)removeAllData;
- (void)addHidEvent:(id)arg1;
@property(retain) SATimestamp *endTime;
@property(retain) SATimestamp *startTime;
@property unsigned long long numSamples;
- (void)addTimestamp:(id)arg1;
- (void)addTask:(id)arg1;
- (void)addSharedCache:(id)arg1;
@property double kPerfPETSampleIntervalLimit; // @dynamic kPerfPETSampleIntervalLimit;
@property BOOL haveKPerfSched; // @dynamic haveKPerfSched;
@property BOOL keepStateBetweenSampleIndexes; // @dynamic keepStateBetweenSampleIndexes;
@property unsigned long long targetHIDEventMachAbs;
- (BOOL)initWithPAStyleCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)parseKTraceFile:(const char *)arg1 warningsOut:(id)arg2 errorOut:(id *)arg3;
- (int)_addKPerfDataFromKTraceSession:(struct ktrace_session *)arg1 beforeMachAbsTime:(unsigned long long)arg2 systemSharedCache:(id)arg3 nonSystemSharedCache:(id)arg4 pidsUsingNonSystemSharedCache:(id)arg5;
- (void)kperfLostEvents:(struct trace_point *)arg1 state:(id)arg2;
- (void)kperfExecString:(struct trace_point *)arg1 state:(id)arg2;
- (void)kperfNewThread:(struct trace_point *)arg1 state:(id)arg2;
- (void)kperfRecord:(struct kpdecode_record *)arg1 state:(id)arg2 frameIterator:(id)arg3 systemSharedCache:(id)arg4 nonSystemSharedCache:(id)arg5 pidsUsingNonSystemSharedCache:(id)arg6;
- (void)kperfTimerFire:(struct trace_point *)arg1 state:(id)arg2;
- (void)kperfSample:(struct trace_point *)arg1 state:(id)arg2;
- (id)taskForPid:(int)arg1 andName:(const char *)arg2 didExecAtTimestamp:(id)arg3 sharedCache:(id)arg4;
- (id)idleThreadSet;
- (id)tidsForPid:(int)arg1;
- (id)tidToPidDict;
- (void)backfillTask:(id)arg1 lastSampleIndex:(unsigned long long)arg2 timestamp:(id)arg3 haveSnap:(BOOL)arg4 terminatedThreadsUserTimeInNs:(unsigned long long)arg5 terminatedThreadsSystemTimeInNs:(unsigned long long)arg6 terminatedThreadsCycles:(unsigned long long)arg7 terminatedThreadsInstructions:(unsigned long long)arg8 suspendCount:(unsigned int)arg9 pageins:(unsigned int)arg10 isDarwinBG:(BOOL)arg11 isForeground:(BOOL)arg12 isBoosted:(BOOL)arg13 isDirty:(BOOL)arg14 haveWQFlags:(BOOL)arg15 wqExceededTotalThreadLimit:(BOOL)arg16 wqExceededConstrainedThreadLimit:(BOOL)arg17 haveMem:(BOOL)arg18 taskSizeInBytes:(unsigned long long)arg19 haveLatencyQos:(BOOL)arg20 latencyQos:(unsigned int)arg21;
- (void)backfillThread:(id)arg1 inTask:(id)arg2 lastSampleIndex:(unsigned long long)arg3 timestamp:(id)arg4 haveName:(BOOL)arg5 name:(const char *)arg6 haveDispatchQueueId:(BOOL)arg7 dispatchQueueId:(unsigned long long)arg8 dispatchQueueLabel:(const char *)arg9 leafKernelFrame:(id)arg10 haveUserStack:(BOOL)arg11 leafUserFrame:(id)arg12 haveSched:(BOOL)arg13 systemCpuTimeNs:(unsigned long long)arg14 userCpuTimeNs:(unsigned long long)arg15 basePriority:(int)arg16 scheduledPriority:(int)arg17 state:(unsigned int)arg18 threadQos:(unsigned char)arg19 threadRequestedQos:(unsigned char)arg20 threadRequestedQosOverride:(unsigned char)arg21 threadQosPromote:(unsigned char)arg22 threadQosIpcOverride:(unsigned char)arg23 threadQosSyncIpcOverride:(unsigned char)arg24 haveCycIns:(BOOL)arg25 instructions:(unsigned long long)arg26 cycles:(unsigned long long)arg27 haveSnap:(BOOL)arg28 ioTier:(unsigned char)arg29 isIOPassive:(BOOL)arg30 isDarwinBG:(BOOL)arg31 isSuspended:(BOOL)arg32 isGlobalForcedIdle:(BOOL)arg33 isIdleWorkQueue:(BOOL)arg34 lastMadeRunnableTime:(id)arg35 isOnCore:(BOOL)arg36;
- (BOOL)saveBinaryFormatToStream:(struct __sFILE *)arg1;
- (id)binaryFormat;

@end

