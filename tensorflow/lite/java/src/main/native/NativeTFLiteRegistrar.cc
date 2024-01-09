
#include <jni.h>

#include "tensorflow/lite/java_text/kernels/byte_splitter_tflite.h"
#include "tensorflow/lite/java_text/kernels/fast_bert_normalizer_tflite.h"
#include "tensorflow/lite/java_text/kernels/fast_wordpiece_tokenizer_tflite.h"
#include "tensorflow/lite/java_text/kernels/ngrams_tflite.h"
#include "tensorflow/lite/java_text/kernels/ragged_tensor_to_tensor_tflite.h"
#include "tensorflow/lite/java_text/kernels/sentencepiece/py_tflite_registerer.h"
#include "tensorflow/lite/java_text/kernels/sentence_fragmenter_v2_tflite.h"
#include "tensorflow/lite/java_text/kernels/whitespace_tokenizer_tflite.h"
extern "C" {

JNIEXPORT void JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_addByteSplit(JNIEnv* env, jobject obj, jlong resolver) {
    return
        tflite::ops::custom::text::AddByteSplit(
            reinterpret_cast<tflite::MutableOpResolver*>(resolver));
}

JNIEXPORT void JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_addByteSplitByOffsets(JNIEnv* env, jobject obj, jlong resolver) {
    return
        tflite::ops::custom::text::AddByteSplitByOffsets(
            reinterpret_cast<tflite::MutableOpResolver*>(resolver));
}

JNIEXPORT void JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_addFastBertNormalize(JNIEnv* env, jobject obj, jlong resolver) {
    return
        tflite::ops::custom::text::AddFastBertNormalize(
                reinterpret_cast<tflite::MutableOpResolver*>(resolver));
}

JNIEXPORT void JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_addFastSentencepieceDetokenize(JNIEnv* env, jobject obj, jlong resolver) {
    return
        tflite::ops::custom::text::AddFastSentencepieceDetokenize(
            reinterpret_cast<tflite::MutableOpResolver*>(resolver));
}

JNIEXPORT void JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_addFastSentencepieceTokenize(JNIEnv* env, jobject obj, jlong resolver) {
    return
        tflite::ops::custom::text::AddFastSentencepieceTokenize(
            reinterpret_cast<tflite::MutableOpResolver*>(resolver));
}

JNIEXPORT void JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_addFastWordpieceTokenize(JNIEnv* env, jobject obj, jlong resolver) {
    return
        tflite::ops::custom::text::AddFastWordpieceTokenize(
            reinterpret_cast<tflite::MutableOpResolver*>(resolver));
}

JNIEXPORT void JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_addFastWordpieceDetokenize(JNIEnv* env, jobject obj, jlong resolver) {
    return
        tflite::ops::custom::text::AddFastWordpieceDetokenize(
            reinterpret_cast<tflite::MutableOpResolver*>(resolver));
}

JNIEXPORT void JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_addNgramsStringJoin(JNIEnv* env, jobject obj, jlong resolver) {
    return
        tflite::ops::custom::text::AddNgramsStringJoin(
            reinterpret_cast<tflite::MutableOpResolver*>(resolver));
}

JNIEXPORT void JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_addRaggedTensorToTensor(JNIEnv* env, jobject obj, jlong resolver) {
    return
        tflite::ops::custom::text::AddRaggedTensorToTensor(
            reinterpret_cast<tflite::MutableOpResolver*>(resolver));
}

JNIEXPORT void JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_addSentenceFragmenterV2(JNIEnv* env, jobject obj, jlong resolver) {
//    return
//        tflite::ops::custom::text::AddSentenceFragmenterV2(
//            reinterpret_cast<tflite::MutableOpResolver*>(resolver));
return
tflite::ops::custom::text::AddRaggedTensorToTensor(
reinterpret_cast<tflite::MutableOpResolver*>(resolver));
}

JNIEXPORT void JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_addWhitespaceTokenize(JNIEnv* env, jobject obj, jlong resolver) {
    return
        tflite::ops::custom::text::AddWhitespaceTokenize(
            reinterpret_cast<tflite::MutableOpResolver*>(resolver));
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

JNIEXPORT jlong JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_getAddByteSplitPointer(JNIEnv* env, jobject obj) {
    return reinterpret_cast<jlong>(&tflite::ops::custom::text::AddByteSplit);
}

JNIEXPORT jlong JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_getAddByteSplitByOffsetsPointer(JNIEnv* env, jobject obj) {
    return reinterpret_cast<jlong>(&tflite::ops::custom::text::AddByteSplitByOffsets);

}

JNIEXPORT jlong JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_getAddFastBertNormalizePointer(JNIEnv* env, jobject obj) {
    return reinterpret_cast<jlong>(&tflite::ops::custom::text::AddFastBertNormalize);
}

JNIEXPORT jlong JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_getAddFastSentencepieceDetokenizePointer(JNIEnv* env, jobject obj) {
    return reinterpret_cast<jlong>(&tflite::ops::custom::text::AddFastSentencepieceDetokenize);
}

JNIEXPORT jlong JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_getAddFastSentencepieceTokenizePointer(JNIEnv* env, jobject obj) {
    return reinterpret_cast<jlong>(&tflite::ops::custom::text::AddFastSentencepieceTokenize);
}

JNIEXPORT jlong JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_getAddFastWordpieceTokenizePointer(JNIEnv* env, jobject obj) {
    return reinterpret_cast<jlong>(&tflite::ops::custom::text::AddFastWordpieceTokenize);

}

JNIEXPORT jlong JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_getAddFastWordpieceDetokenizePointer(JNIEnv* env, jobject obj) {
    return reinterpret_cast<jlong>(&tflite::ops::custom::text::AddFastWordpieceDetokenize);

}

JNIEXPORT jlong JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_getAddNgramsStringJoinPointer(JNIEnv* env, jobject obj) {
    return reinterpret_cast<jlong>(&tflite::ops::custom::text::AddNgramsStringJoin);

}

JNIEXPORT jlong JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_getAddRaggedTensorToTensorPointer(JNIEnv* env, jobject obj) {
    return reinterpret_cast<jlong>(&tflite::ops::custom::text::AddRaggedTensorToTensor);

}

JNIEXPORT jlong JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_getAddSentenceFragmenterV2Pointer(JNIEnv* env, jobject obj) {
//    return reinterpret_cast<jlong>(&tflite::ops::custom::text::AddSentenceFragmenterV2);
return reinterpret_cast<jlong>(&tflite::ops::custom::text::AddRaggedTensorToTensor);

}

JNIEXPORT jlong JNICALL
Java_org_tensorflow_lite_TFLiteRegistrar_getAddWhitespaceTokenizePointer(JNIEnv* env, jobject obj) {
    return reinterpret_cast<jlong>(&tflite::ops::custom::text::AddWhitespaceTokenize);

}
}
